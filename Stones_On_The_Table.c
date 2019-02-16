#define MAX 100
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{int n,i,count;
char s[MAX];

scanf("%d",&n);

count=0;


if(n<1||n>50)
exit(0);

scanf("%s",&s);

for(i=0;i<strlen(s)-1;i++)
{if(s[i]==s[i+1])
count++;
}
printf("%d",count);
return 0;}
