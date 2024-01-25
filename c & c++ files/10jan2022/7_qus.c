#include<stdio.h>

void pattern(int n,char c)
{
	printf("Final pattern:\n");
	int i,j;
	
	for(i=n;i>=1;i--)
	{
	    for(j=1;j<=i;j++)
	    {
	        printf("%c ",c);
	    }
	    
	    printf("\n");
	}
	
}

int main()
{
	char b;
	int number;
    printf("enter char:");
    scanf("%c",&b);
	printf("Enter value of n:");
	scanf("%d",&number);
	pattern(number,b);
    
    return 0;
}