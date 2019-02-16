#define MAX 100
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{char a[MAX],b[MAX],s2[MAX],s1[MAX];
int i;

scanf("%s",&s1);

scanf("%s",&s2);

for(i=0;i<strlen(s1);i++)
{if(s1[i]>=65&&s1[i]<=90)
s1[i]=s1[i]+32;
}
for(i=0;i<strlen(s2);i++)
{if(s2[i]>=65&&s2[i]<=90)
s2[i]=s2[i]+32;
}


for(i=0;i<strlen(s1);i++)
{
if(s1[i]>s2[i])
break;
else if(s1[i]<s2[i])
break;
}
if(s1[i]>s2[i])
printf("1");
if(s1[i]<s2[i])
printf("-1");
if(s1[i]==s2[i])
printf("0");


return 0;}
