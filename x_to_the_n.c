//function to calculate integral raised to the power of another integral
long int x_to_the_n(int , int);
#include<stdio.h>
int main()
{int x,n;
long int result;
//taking input for x and n
printf("\ninput x and n:\n");
scanf("%d%d",&x,&n);
result=x_to_the_n(x,n);
printf("\nx=%d to the power n=%d is equal to %ld\n",x,n,result);

return 0;}

long int x_to_the_n(int x, int n)
{long int result;
int i;
result=1;
for(i=1;i<=n;i++)
{result=result*x;
}

return result;
}
