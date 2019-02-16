#include<stdio.h>
int minvalue(int [],int);
int main()
{int a[]={ 157, -28, -37, 26, 10 };
int b[]={ 12, 45, 1, 10, 5, 3, 22 };
int minvalue(int Values[],int NumberOfElements);
printf("the minimum value of the array a is %d\n",minvalue(a,5));
printf("the minimum value of the array b is %d\n",minvalue(b,7));
return 0;}

int minvalue(int Values[],int NumberOfElements)
{int min,i;
min=Values[0];
for(i=0;i<NumberOfElements;i++)
{if(min>Values[i])
min=Values[i];
}
return min;
}
