#include<stdio.h>
int main()
{_Bool isprime;
int i,j,a,b;

printf("enter any two numbers:\n");
scanf("%d%d",&a,&b);

for(i=a;i<=b;i++)
{isprime=1;

for(j=2;j<i;++j)
if(i%j==0)
isprime=0;

if(isprime!=0)
printf("%d\t",i);

}




return 0;}
