#include<stdio.h>

void mathsoperation(int a,int b,char i)
{
    int c;
    switch (i)
{
    case '+':
        c=a+b;
        printf("Sum of %d and %d is %d",a,b,c);
        break;

    case '-':
        c=a-b;
        printf("Difference of %d from %d is %d",a,b,c);
        break;

    case '*':
        c=a*b;
        printf("The multiplication of %d and %d is %d",a,b,c);
        break;
    
    case '>':
       c=a>b;
        printf("Greater among %d by %d is %d",a,b,c);
        break;

    case '<':
        c=a<b;
        printf("Smaller among  %d by %d is %d",a,b,c);
        break;

    default:
        printf("Reuslt");
        break;
}
}

int main()
{
    int p,q;
    char r;
    printf("Enter two integer and operator:\n");
    scanf("%d %d %c",&p,&q,&r);
    
    mathsoperation(p,q,r);
    return 0;
}