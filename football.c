#define MAX 100
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{char a[MAX];
int i,c1,c2,l;
c1=0;
c2=0;

scanf("%s",&a);
l=strlen(a);
//counting the number of zeroes and one's
for(i=0;i<l;i++)
{
if(a[i]=='0')
c1=c1+1;

if(a[i]=='1')
c2=c2+1;
}

//if no member of the other team is present 
if(c1==0||c2==0)
{exit(0);}

c1=0;
c2=0;

for(i=0;i<l;i++)
{
if(c1>=6||c2>=6)
break;
if(a[i]=='0'&&a[i+1]=='0')
c1++;
if(a[i]=='0'&&a[i+1]=='1')
c1=0;

if(a[i]=='1'&&a[i+1]=='1')
c2++;
if(a[i]=='1'&&a[i+1]=='0')
c2=0;

}

if(c1>=6||c2>=6)
printf("YES");
else
printf("NO");

return 0;}
