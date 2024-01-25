#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/socket.h>

#define PORT 8080
#define MAX_BUFFER_SIZE 1024

void send_file(int client_socket, const char* file_name) {
    FILE* file = fopen(file_name, "rb");
    if (file == NULL) {
        perror("File not found");
        return;
    }

    char buffer[MAX_BUFFER_SIZE];
    int bytesRead;
    while ((bytesRead = fread(buffer, 1, sizeof(buffer), file)) > 0) {
        send(client_socket, buffer, bytesRead, 0);
    }

    fclose(file);
}

int main() {
    int server_socket, client_socket;
    struct sockaddr_in server_addr, client_addr;
    socklen_t addr_len = sizeof(client_addr);

    // Create socket
    server_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (server_socket == -1) {
        perror("Socket creation failed");
        exit(1);
    }

    server_addr.sin_family = AF_INET; 
    server_addr.sin_port = htons(PORT);
    server_addr.sin_addr.s_addr = INADDR_ANY;

    // Bind the socket
    if (bind(server_socket, (struct sockaddr*)&server_addr, sizeof(server_addr))<0) {
        perror("Socket binding failed");
        exit(1);
    }

    // Listen for connections
    if (listen(server_socket, 5) == -1) {
        perror("Listening failed");
        exit(1);
    }

    printf("Server is listening on port %d...\n", PORT);

    client_socket = accept(server_socket, (struct sockaddr*)&client_addr, &addr_len);

    char file_name[256];
    printf("Enter the name of the file to transfer: ");
    scanf("%s", file_name);

    send_file(client_socket, file_name);

    printf("File sent successfully.\n");

    close(client_socket);
    close(server_socket);

    return 0;
}
