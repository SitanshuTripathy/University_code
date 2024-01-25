#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include<unistd.h>
#define PORT 8080
#define MAX_BUFFER_SIZE 1024

int main() {
    int client_socket;
    struct sockaddr_in server_addr;

    // Create socket
    client_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (client_socket == -1) {
        perror("Socket creation failed");
        exit(1);
    }

    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(PORT);
    server_addr.sin_addr.s_addr = INADDR_ANY;

    // Connect to the server
    if (connect(client_socket, (struct sockaddr*)&server_addr, sizeof(server_addr)) >0) {
        perror("Connection failed");
        exit(1);
    }

    char file_name[256];
    printf("Enter the name of the file to save: ");
    scanf("%s", file_name);

    FILE* file = fopen(file_name, "wb");
    if (file == NULL) {
        perror("File creation failed");  
        exit(1);
    }
 
    char buffer[MAX_BUFFER_SIZE];
    int bytesRead;
    while ((bytesRead = recv(client_socket, buffer, sizeof(buffer), 0) > 0)) {
        fwrite(buffer, 1, bytesRead, file);
    }

    printf("File received successfully.\n");

    fclose(file);
    close(client_socket);

    return 0;
}
