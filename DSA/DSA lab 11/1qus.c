#include <stdio.h>

void main()
{
  
  int i,j,n;
  printf("\nEnter the number of nodes in G : ");
  scanf("%d", &n);
  char v[n];
  printf("\nEnter the vertices of G : ");
  for(i=0; i<n; i++)
    scanf(" %c", &v[i]);
  int Adj[n][n];
  for(i=0; i<n; i++)
  {
    for(j=0; j<n; j++)
    {
      printf("Is %c a neighbour of %c [0/1] : ", v[j], v[i]);
      scanf(" %d", &Adj[i][j]);
    }
  }
  printf("\nAdjacency Matrix : \n");
for(i=0; i<n; i++)
  {
    for(j=0; j<n; j++)
      printf("%d ", Adj[i][j]);
    printf("\n");
  }
  printf("\nThe graph is: \n");
  for(i=0; i<n; i++)
  {
    printf("The neighbours of %c :", v[i]);
    for(j=0; j<n; j++)
    {
      if(Adj[i][j]==1)
        printf(" %c", v[j]);
    }
    printf("\n");
  }
}
