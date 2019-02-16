#define MAX 100
#include<stdio.h>
#include<stdlib.h>
int main()
{int n,i,j,k,a[MAX],tmp;

i=0;

while(1)

{
scanf("%d",&n);
if(n<0||n>99)
break;
if(n==42)
break;
else{
a[i]=n;
i=i+1;
}}
a[i]=n;

for(k=1;k<=i;k++)
{
for(j=0;j<=i-(k);j++)
{
if(a[j+1]<a[j])
{tmp=a[j+1];
a[j+1]=a[j];
a[j]=tmp;
}
}
}
for(j=0;j<=i;j++)
{printf("%d\n",a[j]);}



return 0;}
