#include<stdio.h>
void gcd(int,int);
int main()
{int a,b;
printf("enter two values of which you want to find the gcd:\n");
scanf("%d%d",&a,&b);
gcd(a,b);
return 0;}

void gcd(int u,int v)
{int temp;
while(v!=0)
{temp=u%v;
u=v;
v=temp;}
printf("gcd=%d",u);
}
