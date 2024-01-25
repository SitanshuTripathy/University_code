#include<stdio.h>

int main(){
int a[10];

    for(int i = 0; i < 10; i++){
        printf("Enter value for element at %d position \n", i);
        scanf("%d", &a[i]);
    }

    int *b = &a[0];
    int *c = &a[5];

    printf("The array is: ");

    for(int i = 0; i < 5; i++){
        printf("%d %d ",*(b+i),*(c+i));
    }
return 0;
}