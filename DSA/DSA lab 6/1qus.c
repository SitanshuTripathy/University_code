#include <stdio.h>
#include <stdlib.h>

int stack[100];
int top = -1;
void check(){
    if (top<0)
    printf("\nThe stack is empty");
    else
    printf("\nThe stack is not empty");
    }

void push(int element)
{
    
    if (top >= 100)
    {
        printf("\nError! Stack overflow detected!!.\n");
        return;
    }
     top++;
    stack[top] = element;
    
}


int pop()
{
   
    if (top < 0)
    {
        printf("Stack is empty. Pop operation impossible\n");
        return INT_MIN;
    }
    else
    {
       return stack[top--];
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(int i=top; i>=0; i--)
            printf("  %d",stack[i]);
        
    }
    else
    {
        printf("\n The STACK is empty");
    }
   
}
int main()
{
 int cho, data;

    printf("\n1. check the stack\n");
    printf("2. display\n");
    printf("3. Push element\n");
    printf("4. Pop element\n");
    printf("5. Quit program\n");
  while(1){  
  printf("\nEnter your choice: ");
  scanf("%d", &cho);
switch(cho)
        {
            case 1:
            check();
            break;
            case 2:
            display();
            break; 
            case 3:
                printf("Enter data to push into stack: ");
                scanf("%d", &data);
                push(data);
                break; 
            case 4:
                data = pop();
                if (data != INT_MIN)
                    printf("Data => %d\n", data);
                break;
            
            case 5:
                printf("Exiting program\n");
                exit(0);
                break;
            default:
                printf("Invalid choice\n");
        }
    }


    return 0;
}


