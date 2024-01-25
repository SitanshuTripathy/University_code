#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void insertion_sort(char *a,int n)
{
    char temp;
    int j;
    for(int i = 1; i < n; i++)
    {
        temp = a[i];
        for(j = i-1; j >= 0; j--)
        {
            if(a[j]>temp)
            a[j+1] = a[j];
            else
            break;
        }
        a[j+1] = temp;
    }
}
void sort_capital(char *s)
{
    char arr[strlen(s)+1];
    int pos[strlen(s)];
    int k=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            arr[k]=s[i];
            pos[k++]=i;
        }
    }
    insertion_sort(arr,k);
    for(int j=0;j<k;j++)
    {
        s[pos[j]]=arr[j];
    }
    printf("After sorting: %s",s);
}
int main() {
    char str[20];
    printf("\nEnter the string: ");
    gets(str);
    printf("Before Sorting: %s\n", str );
    sort_capital(str);
}