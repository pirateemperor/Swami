#include<stdio.h>
int main()
{int number,i,n=0,a[n];
do
{

printf("enter another number or to end enter 0\n");
scanf("%d",&number);

if(number==0)
break;

a[n]=number;
n=n+1;

}while(number!=0);

n=n-1;

for(i=n;i>=0;--i)
{

if(a[n]%2==0)

{printf("%d is the greatest even number\n",a[n]);
printf("%d is the greatest odd number\n",a[n-1]);

break;}

else
{printf("%d is the greatest odd number\n",a[n]);
printf("%d is the greatest even number\n",a[n-1]);
break;
}}


return 0;}

