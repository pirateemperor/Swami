void r(int);
#include<stdio.h>
int main()
{int num,sum,i,j;
scanf("%d",&num);
sum=0;
j=1;
for(i=1;i<=num;i=i++)
{sum=sum+j;
j=j+2;
}
printf("%d",sum);

return 0;}


