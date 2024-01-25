#include <stdio.h>



void pat1(char s[1]){
    printf("First pattern is: \n");

    int len = 0;
    for(len = 0; s[len] != '\0'; len++);

    char *c = &s[0];

    for(int i = len-1; i >= 0; i--){
        for(int j = 0; j <= i; j++){
            printf("%c", *(c+j));
        }
        c++;
        printf("\n");
    }
}


void pat2(char s[1]){
    printf("Second pattern is: \n");

    int len = 0;
    for(len = 0; s[len] != '\0'; len++);

    char *c = &s[len-1];

    for(int i = len-1; i >= 0; i--){
        for(int j = 0; j <= i; j++){
            printf("%c", *(c-j));
        }
        printf("\n");
        c--;
    }

}



int main(){

    char word [0];
    printf("Enter string: ");
    scanf("%s", word);

    pat1(word);
    pat2(word);

    return 0;
}
