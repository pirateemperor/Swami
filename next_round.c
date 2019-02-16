#define MAX 50
#include<stdio.h>
#include<stdlib.h>
int main()
{int count,i,n,k,a[MAX];
count=0;
scanf("%d %d",&n,&k);
printf("\n");
if(n>50||n<0||k<0||k>50||k>n)
exit(0);

for(i=0;i<=n-1;i++)
{if(i>=0&&i<=n-2)
scanf("%d ",&a[i]);
else if(i==n-1)
scanf("%d",&a[i]);
}

printf("\n");
for(i=0;i<=n-1;i++)
{if((a[i]>=a[k-1]))
{if(a[k-1]==0)
{if(a[i]==a[k-1])
{
continue;}}
count++;}
}
printf("%d",count);
return 0;}
