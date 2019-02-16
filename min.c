//to find minimum number from the array of integers
#define MAX 100
int min(int []);
int N;
#include<stdio.h>
int main()
{int b,i,a[MAX];
printf("Enter the number of arrays;\n ");
scanf("%d",&N);
printf("enter the array values:\n");
for(i=0;i<=N-1;i++)
{printf("\na[%d]=",i);
scanf("%d",&a[i]);
}
b=min(a);
printf("minimum value from the array is %d\n",b);
return 0;}

int min(int a[])
{int i,min_value;
min_value=a[0];
for(i=0;i<=N-1;i++)
{if(a[i]<min_value)
 min_value=a[i];
}
return min_value;
}

