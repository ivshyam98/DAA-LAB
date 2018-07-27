#include<stdio.h>
#include<time.h>
void main()
{
   int a[100000],i,j,min,n,temp;
   clock_t start,end;
   printf("Enter the number of elements\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
     a[i] = rand();
   start = clock();
   for(i=0;i<=n-2;i++)
   {
     min = i;
     for(j=i+1;j<=n-1;j++)
     {
	if(a[j] < a[min])
	  min = j;
     }
     temp = a[min];
     a[min] = a[i];
     a[i] = temp;
   }
   end = clock();
   for(i=0;i<n;i++)
     printf("%d  ",a[i]);
   printf("tim taken :%lf",(double)(end-start)/CLOCKS_PER_SEC);
}