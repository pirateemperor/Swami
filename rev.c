//reversing a number
void rev(int);
#include<stdio.h>
int main()
{int n;
printf("enter any number which you want to be reversed:\n");
scanf("%d",&n);
rev(n);
return 0;}

void rev(int a)
{int b;
while(a!=0)
{b=a%10;
printf("%d",b);
a=a/10;}



}
