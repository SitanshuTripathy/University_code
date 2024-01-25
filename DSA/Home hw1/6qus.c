#include<stdio.h>
#include<string.h>
// WAP to input your mark and display your grade.
int main(){
int mark;
printf("Enter the mark =");
scanf("%d",&mark);
if ( mark>90 && mark<=100){
printf("Grade O");}
else if(mark>80&&mark<=90){
printf("Grade E");}
else if(mark>70&&mark<=80){
printf("Grade A");}
else if(mark>60&&mark<=70){
printf("Grade B");}
else
printf("Grade F");
return 0;
}