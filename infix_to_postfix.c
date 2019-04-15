#define MAX 25
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void push(char);//prototype of push function
int pop(void);//prototype of pop function
int prec(char);//prototype of precedence function

//declaring node
struct node{
int info;
struct node *link;
};

struct node *top=NULL;

int main()
{
int i,j,flag;

char p[MAX],q[MAX],element;

printf("enter infix expession:\n");
scanf("%s",q);

strcat(q,")");

push('(');

i=0;
j=0;

while(q[i]!='\0')
{
flag=1;

if(isdigit(q[i]))//checking if infix element is a digit
{p[j]=q[i];
j+=1;
}

if(q[i]=='(')//checking if infix element is '{'
{push(q[i]);
}

if(q[i]=='-'||q[i]=='+'||q[i]=='*'||q[i]=='/'||q[i]=='^')//checking if infix element is an operator
{
while(flag==1)
{element=pop();

if(element=='-'||element=='+'||element=='*'||element=='/'||element=='^')//checking the previous element in the stack
{
if(prec(element)>=prec(q[i]))
{p[j]=element;
j+=1;
}
else
{push(element);
flag=0;
push(q[i]);
}
}

else//if the infix element isnt an operator
{
push(element);
flag=0;
push(q[i]);
}
}
}

if(q[i]==')')
{
while(1)
{
element=pop();

if(element=='\0'||element=='(')
break;

else
{
while(element!='\0'||element!='(')
{p[j]=element;
j+=1;
element=pop();
}
}
}
}
i+=1;
}
printf("the postfix expression is %s\n",p);
return 0;}
//end of main function



//defining push function
void push(char num)
{
struct node *tmp;
tmp=(struct node*)malloc(sizeof(struct node));

if(tmp==NULL)
{printf("overflow!!\n");
exit(0);
}

tmp->info=num;

if(top==NULL)
{
top=tmp;
top->link=NULL;
}

else if(top!=NULL)
{tmp->link=top;
top=tmp;
}
}

//defining pop function
int pop()
{struct node *tmp;
int item;
//if stack is empty
if(top==NULL)
{printf("stack is empty!!!\n");
return(-9999);
}
//if stack contains some elements
else
{item=top->info;
tmp=top;
top=top->link;
}
free(tmp);
return(item);
}

int prec(char x)
{
if(x=='-'||x=='+')
return 1;

if(x=='*'||x=='/')
return 2;

if(x=='^')
return 3;
}

