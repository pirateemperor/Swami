#include<stdio.h>
int main()
{int base,convertednumber[64],nextdigit,index=0;
long int numbertoconvert;
const char basedigits[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
//taking input
printf("enter the number you want to convert:\n");
scanf("%ld",&numbertoconvert);
printf("base??\n");
scanf("%d",&base);

do{
convertednumber[index]=numbertoconvert%base;
++index;
numbertoconvert=numbertoconvert/base;
}while(numbertoconvert!=0);

//printing in reverse
for(--index;index>=0;--index)
{nextdigit=convertednumber[index];
printf("%c",basedigits[nextdigit]);

}
printf("\n");

return 0;}
