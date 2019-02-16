#include<stdio.h>
#include<string.h>
int main()
{int n,l;
char s[100];
//input for number of lines
scanf("%d",&n);
while(n--)
{//input for string
scanf("%s",&s);
l=strlen(s);
if(l>10)
printf("%c%d%c\n",s[0],l-2,s[l-1]);
else
printf("%s\n",s);
}


return 0;}
