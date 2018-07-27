#include<stdio.h>
#include<math.h>

void warshals(int a[10][10],int n)
{
   int i,j,k;
   for(k=1;k<=n;k++)
     for(i=1;i<=n;i++)
       for(j=1;j<=n;j++)
          a[i][j] = (a[i][j]||(a[i][k]&&a[k][j]));
}

void main()
{
   int a[10][10],t[10][10],i,j,n;
   printf("enter no of vertices\n");
   scanf("%d",&n);
   printf("enter the adjacency matrix\n");
   for(i=1;i<=n;i++)
   {
     for(j=1;j<=n;j++)
     {
       scanf("%d",&a[i][j]);
     }
   }

   warshals(a,n);
   printf("transitive closure of the given matrix is\n");
   for(i=1;i<=n;i++)
   {
      for(j=1;j<=n;j++)
      {
        printf("%d\t",a[i][j]);
      }
      printf("\n");
   }
}
