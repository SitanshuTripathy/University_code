#include <stdio.h>
#include <stdlib.h>
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(int argc, char* argv[])
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    swap(&a, &b);
    printf("%d,%d", a, b);
    return 0;
}