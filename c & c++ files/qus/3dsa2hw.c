#include <stdio.h>
#include <stdlib.h>
struct node{
    char data;
    char exp;
    struct node* next;
};
char operators[5] = {'+', '-', '*', '/', '^'};
int main(){
    char str[100];
    printf("Eter double polynomial");
    scanf("%s",str);
    char s=str[0];
    struct node* head = (struct node*)malloc(sizeof(struct node));
    struct node* temp = head;
    for(int i=0;i<100;i++){
         if(str[i]=='\0'){
            temp->next = NULL;
            break;
        }
        int r=0;
            for(int j=0;j<5;j++){
                if(str[i]==operators[j]){
                    r=1;
                    break;
                }
            }
          if(r==0&&(str[i]=='x'||str[i]=='y')){
            struct node* temp2 = (struct node*)malloc(sizeof(struct node));
            temp2->data=str[i];
            temp2->exp=str[i+1];
            temp2->next=NULL;
            temp->next=temp2;
            i=i+1;
            if(str[i]=='\0'){
                temp->next = NULL;
                break;
            }
            }
            else{
                struct node* temp2 = (struct node*)malloc(sizeof(struct node));
                temp2->data=str[i];
                temp2->exp=-1;
                temp2->next=NULL;
                temp->next=temp2;
            }
            temp=temp->next;
        }
        head=head->next;
    temp=head;
    while(temp!=NULL){
        printf("%c",temp->data);
        if(temp->exp!=-1){
            printf("^%c",temp->exp);
        }
        temp=temp->next;
    }
    return 0;
}