#include<stdio.h>
int main()
{int counter[11],i,n;

for(i=0;i<=10;i++)
counter[i]=0;

for(i=1;i<=5;i++)
{
printf("enter your choice:\n");
scanf("%d",&n);

if(n<1||n>10)
printf("invalid input.\n");

else
++counter[n];
}

for(i=1;i<=10;i++)
printf("counter[%d]=%d\n",i,counter[i]);


return 0;}
