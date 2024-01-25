#include <stdio.h> 

int main() {
  int n, i, c = 0,stp=0;
  printf("Enter any number n:");
  scanf("%d", &n);

 
  for (i = 1; i <= n; i++) {
      if (n % i == 0) {
         c++;
      }
      stp++;
  }

  if (c == 2) {
        printf("n is a Prime number");stp++;
  }
  else {
         printf("n is not a Prime number");stp++;
  }
  printf("\nthe steps=%d",stp);
  return 0;   
}