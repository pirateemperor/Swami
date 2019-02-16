#include<stdio.h>
void fact (int);
int main()
{int n;
printf("enter any number you want the factorial of:\n");
scanf("%d",&n);
fact(n);
return 0;}

void fact(int n)
{int i,fact=1;
for(i=n;i>0;--i)
{fact*=i;
}
printf("factorial is %d\n",fact);
}
