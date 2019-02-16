#include<stdio.h>
#define E 0.00001
float abs(float);
int main()
{float x,guess;
//input x
printf("input the number you wnat the square root of:\n");
scanf("%f",&x);
if(x<0)
printf("invalid value.\n");

else if(x==0)
printf("the square root of %f is 0\n",x);
else{
guess=1;
while(abs(guess*guess-x)>=E)
{guess=(x/guess+guess)/2;
}
printf("the square root of %f is %f\n",x,guess);
}
return 0;}

float abs(float a)
{if(a<0)
a=-a;
return a;}
