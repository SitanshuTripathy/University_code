#include <stdio.h>

int main()
{
  
    int a[3][4];
    int b[3][4];
    int c[3][4];
    
    printf("Enter the values for 1st Matrix A\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("Enter value in %d %d : \n", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the values for 2nd Matrix A\n");
     for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("Enter value in %d %d : \n", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("The result of summation of both the matrix is\n");
    for(int i=0;i<3;i++)
    {
     for(int j=0;j<4;j++){
        c[i][j] = a[i][j] +b [i][j];
     }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
