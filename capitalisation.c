#define MAX 1000
#include<stdio.h>
#include<string.h>
int main()
{int i;
char s[MAX];
scanf("%s",&s);
if(s[0]>=97&&s[0]<=122)
{s[0]=s[0]-32;
}
for(i=0;i<strlen(s);i++)
{printf("%c",s[i]);
}
return 0;}
