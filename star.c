#include<stdio.h>
int main()
{int j,i,k=0,s=1;
for(i=1;i<=5;i++)
{for(j=1;j<=9;j++){
if(j>=6-i&&j<=4+i&&k==0)
{printf("%d",s);
k=1;}
else{
printf(" ");
k=0;}
}
k=0;
printf("\n");
}



return 0;}
