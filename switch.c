#include<stdio.h>
#include<stdlib.h>
int main()
{int i,n,f,j;
while(1)
{printf("\n\n\t\t MENU \n\n");
printf("\n\n\t\t 1.Factorial. \n\n");
printf("\n\n\t\t 2.Odd/even. \n\n");
printf("\n\n\t\t 3.prime number. \n\n");
printf("\n\n\t\t 4.exit. \n\n");
printf("enter your choice:\n");
scanf("%d",&j);
switch(j){
case 1:{f=1;
printf("enter any number:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
f=f*i;
printf("factorial of %d is %d",n,f);
}
break;
case 2:{
printf("enter any number:\n");
scanf("%d",&n);
if(n%2==0)
printf("number is even");
else
printf("number is odd");

}
break;
case 3:{
printf("enter any number\n");
scanf("%d",&n);
for(i=2;i<n;i++)
{if(n%i==0)
break;
}
if(i==n)
printf("it is a prime number");
else
printf("it is not a prime number");


}
break;
case 4:
exit(0);
default:
printf("invalid input\n");}
}




return 0;}
