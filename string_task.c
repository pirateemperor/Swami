#define MAX 100
#include<stdio.h>
#include<string.h>
int main()
{char s[MAX];
int i;
scanf("%s",&s);

for(i=0;i<strlen(s);i++)
{
if(s[i]>=65&&s[i]<=90)
s[i]=s[i]+32;

if(s[i]!='a'&&s[i]!='i'&&s[i]!='e'&&s[i]!='o'&&s[i]!='u'&&s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U'&&s[i]!='Y'&&s[i]!='y')
{printf(".%c",s[i]);
}

}

return 0;}
