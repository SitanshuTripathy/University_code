#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void create(struct node **head ){
int c ,ch;
struct node *temp, *prev;

while(ch!=0){
     printf("Enter number: ");
        scanf("%d", &c);
        temp = (struct node *)malloc(sizeof(struct node));
temp->data=c;
temp->next=NULL;
if (head==NULL)
{
   * head=temp;
}
else{
    prev->next=temp;
} printf("Do you wish to continue [1/0]: ");
        scanf("%d", &ch);
} printf("\n");
}
int main(){
 struct node *p = NULL;
 p=(struct node *)malloc(sizeof(struct node));
 create(&p);

return 0;
}