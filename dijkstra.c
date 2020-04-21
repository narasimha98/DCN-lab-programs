#include<stdio.h>
#define infinity 999
void dijkstra(int cost[10][10],int n,int source,int distance[10])
{
int visited[10],min,u;
int i,j;
for(i=1; i<=n; i++)
{
distance[i]=cost[source][i];
visited[i]=0;
}
visited[source]=1;
for(i=1; i<=n; i++)
{
min=infinity;
for(j=1; j<=n; j++)
{
if(visited[j]==0 && distance[j]<min)
{
min=distance[j];
u=j;
}
}
visited[u]=1;
for(j=1; j<=n; j++)
{
if(visited[j]==0 && (distance[u]+cost[u][j]<distance[j]))
{
distance[j]=distance[u]+cost[u][j];
}
}
}
}
void main()
{
int n,cost[10][10],distance[10];
int i,j,source,sum;
printf("enter the no of nodes\n");
scanf("%d",&n);
printf("enter cost adj matrix 999 for no edge\n");
for(i=1; i<=n; i++)
{
for(j=1; j<=n; j++)
{
scanf("%d",&cost[i][j]);
}
}
printf("enter source\n");
scanf("%d",&source);
dijkstra(cost,n,source,distance);
for(i=1; i<=n; i++)
{
printf("\n shortest dist from %d to %d is %d\n",source,i,distance[i]);
}
}
