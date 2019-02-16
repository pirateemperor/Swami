#include<stdio.h>
#include<stdlib.h>
int main()
{int n,p,v,t,count=0;
scanf("%d",&n);

if(n<1||n>1000)
exit(0);
while(n--){
scanf("%d %d %d",&p,&v,&t);
if((p==1&&v==1)||(p==1&&t==1)||(t==1&&v==1))
{count++;
}
}
printf("%d",count);
return 0;}
