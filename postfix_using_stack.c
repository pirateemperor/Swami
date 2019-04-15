#define MAX 20
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void push(int);//prototype of push function
int pop(void);//prototype of pop function

//defining node of the stack
struct node{
int info;
struct node *link;
};
struct node *top=NULL;


int main()
{
int i,num,a,b,result;

char p[MAX];
//to enter postfix expression
printf("enter any postfix expression:\n");
scanf("%s",p);

strcat(p,"}")//entering "}" at the end of the array

i=0;
while(p[i]!='}')
{

if(isdigit(p[i]))//checking if the element is digit or not
{num=p[i]-'0';
push(num);
}
if(p[i]=='-'||p[i]=='+'||p[i]=='/'||p[i]=='*'||p[i]=='^')//checking if the element of the array is an operator 
{

a=pop();
b=pop();

if(p[i]=='-')
{result=b-a;
}

if(p[i]=='+')
{result=b+a;
}

if(p[i]=='*')
{result=b*a;
}

if(p[i]=='/')
{result=b/a;
}

if(p[i]=='^')
{result=pow(b,a);
}

push(result);
}

i+=1;
}

result=pop();
printf("result=%d\n",result);
return 0;}

void push(int num)
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















