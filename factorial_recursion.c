#include<stdio.h>
//function prototype
long unsigned int factorial(unsigned int);
int main()
{unsigned int i; 
for(i=0;i<=10;i++)
printf("\n%u!=%lu\n",i,factorial(i));

return 0;}
//function definition
long unsigned int factorial(unsigned int i)
{long unsigned int result;
if(i==0)
result=1;
else
result=i*factorial(i-1);

return result;
}
