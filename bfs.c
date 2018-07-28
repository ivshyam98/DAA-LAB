#include<stdio.h>
int visited[20],visitedorder[20],count=0;

void bfs(int a[20][20],int n,int x)
{
int que[20],f=0,r=-1;

count++;
visited[x]=count;
que[++r]=x;
while(f<=r)
{
int m=que[f++];

for(int i=1;i<=n;i++)
{
if(a[m][i]==1 && visited[i]==0)
{
count++;
que[++r]=i;
visited[i]=count;
}
}
}
}

void main(){

int i,j,a[20][20],n;
printf("enter the number of vertices\n");
scanf("%d",&n);
printf("enter the adjacency matrix\n");
for(i=1;i<=n;i++){
visited[i]=0;
for(j=1;j<=n;j++)
scanf("%d",&a[i][j]);

}
int source;
printf("enter the source vertex\n");
scanf("%d",&source);
bfs(a,n,source);
printf("----\n");
for(i=1;i<=n;i++)
{
if(visited[i]==0){
bfs(a,n,i);
}
}

for(i=1;i<=n;i++)
visitedorder[visited[i]]=i;

for(i=1;i<=n;i++)
printf("%c\t",visitedorder[i]+64);

}

