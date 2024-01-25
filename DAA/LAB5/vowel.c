#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int partition(char *a, int min, int max)
{
    int pivot = a[min], d = min, u = max;
    while(1)
    {
        while(a[d] <= pivot && d < max)
        d++;
        while(a[u] > pivot)
        u--;
        if(d < u)
        {
            char temp = a[d];
            a[d] = a[u];
            a[u] = temp;
        }
        else
        break;
    }
    char temp = a[u];
    a[u] = a[min];
    a[min] = temp;
    return u;
}
void quick_sort(char *a, int min, int max)
{
    if(min < max)
    {
        int pos = partition(a, min, max);
        quick_sort(a, min, pos-1);
        quick_sort(a, pos+1, max);
    }
}
int check_vowel(char a)
{
    if(a=='A'||a=='a'||a=='E'||a=='e'||a=='I'||a=='i'||a=='O'||a=='o'||a=='U'||a=='u')
    return 1;
    else
    return 0;
}
void sort_capital(char *s)
{
    char arr[strlen(s)+1];
    int pos[strlen(s)];
    int k=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(check_vowel(s[i]))
        {
            arr[k]=s[i];
            pos[k++]=i;
        }
    }
    quick_sort(arr,0,k-1);
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