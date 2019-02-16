#include<stdio.h>
int main()
{_Bool isprime;
int i,j,n;
printf("enter any number:\n");
scanf("%d",&n);
for(i=2;i<=n;++i)
{isprime=1;
  for(j=2;j<i;++j)
  if(i%j==0)
   isprime=0;
if(isprime!=0)
printf("%d\t",i);
}


return 0;}
