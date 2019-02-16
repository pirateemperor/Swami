#include<stdio.h>
#include<stdlib.h>
int main()
{int M,N;
scanf("%d %d",&M,&N);
if(M>16||N>16||M<1||N<1)
exit(0);
printf("%d",(M*N)/2);
return 0;}
