//algorithm to find the max of the given array
#define N 4
#include<stdio.h>
int main()
{int k,MAX,LOC,DATA[N]={1,2,3,4};
MAX=DATA[0];
LOC=0;
k=0;
while(k<N)
{
if(MAX<DATA[k])
{MAX=DATA[k];
LOC=k;
}

k=k+1;
}
printf("MAX=%d,LOC=%d\n",MAX,LOC);

return 0;}
