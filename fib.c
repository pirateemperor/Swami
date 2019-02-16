//fibonacci number
#define MAX 1000
#include<stdio.h>
int main()

{int i,n,fib[MAX];

printf("till which number do you want to find the fibonacci number of:\n");
scanf("%d",&n);

fib[0]=0;
fib[1]=1;
for(i=2;i<=n;i++)
{fib[i]=fib[i-2]+fib[i-1];
}
for(i=0;i<=n;i++)
{printf("fibonacci of number %d is %d\n",i,fib[i]);
}



return 0;}
