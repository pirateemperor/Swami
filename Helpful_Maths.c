#define MAX 100
#include<stdio.h>
#include<string.h>
int main()
{int i,j,count,tmp;
char s[MAX];
count=0;
scanf("%s",&s);
for(i=0;i<strlen(s);i++)
{if(s[i]=='+')
count=count+1;
}
for(i=1;i<=count;i++)
{
for(j=0;j<=strlen(s)-3;j=j+2)
{
if(s[j]>s[j+2])
{tmp=s[j];
s[j]=s[j+2];
s[j+2]=tmp;
}
}
}
for(i=0;i<strlen(s);i++)
printf("%c",s[i]);
return 0;}
