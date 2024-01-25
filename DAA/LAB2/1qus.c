#include <stdio.h>
#include <stdlib.h>

void decToBinary(int n, FILE *fptr) {
    if (n / 2 != 0) {
        decToBinary(n / 2, fptr);
    }
    fprintf(fptr, "%d", n % 2);
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s n input_file output_file\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);
    char *input_file = argv[2];
    char *output_file = argv[3];

    FILE *fin = fopen(input_file, "r");
    if (fin == NULL) {
        printf("Error opening input file\n");
        return 1;
    }

    FILE *fout = fopen(output_file, "w");
    if (fout == NULL) {
        printf("Error opening output file\n");
        return 1;
    }

    int num;
    for (int i = 0; i < n && fscanf(fin, "%d", &num) == 1; i++) {
        fprintf(fout, "The binary equivalent of %d is ", num);
        decToBinary(num, fout);
        fprintf(fout, "\n");
    }

    fclose(fin);
    fclose(fout);

    fout = fopen(output_file, "r");
    if (fout == NULL) {
        printf("Error opening output file\n");
        return 1;
    }

    char c;
    while ((c = fgetc(fout)) != EOF) {
        printf("%c", c);
    }

    fclose(fout);

    return 0;
}
