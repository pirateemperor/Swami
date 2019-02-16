#include<stdio.h>
#include<stdlib.h>
int main()
{int X,n;
char a,b,c;
X=0;
scanf("%d",&n);
if(n>150||n<1)
exit(0);	
while(n--)
{scanf(" %c%c%c",&a,&b,&c);
if(a=='+'&&b=='+')
{X=X+1;
}
else if(b=='+'&&c=='+')
{X=X+1;
}
else if(a=='-'&&b=='-')
{X=X-1;
}
else if(b=='-'&&c=='-')
{X=X-1;
}
}
printf("%d",X);

return 0;}
