#define MAX 5
#include<stdio.h>
#include<stdlib.h>
void push(int[]);
void pop(int[]);
void traverse(int[]);
int top=-1;
int main()
{int choice;
int stack[MAX],item;
while(1)
{
printf("\nMENU\n");
printf("\t\t1.PUSH\n");

printf("\t\t2.POP\n");

printf("\t\t3.TRAVERSE\n");

printf("\t\t4.EXIT\n");

printf("enter your choice\n");

scanf("%d",&choice);

switch(choice)
{
case 1:
printf("PUSH\n");
push(stack);
break;

case 2:
printf("POP\n");
pop(stack);
break;

case 3:
printf("TRAVERSE\n");
traverse(stack);
break;


case 4:
printf("EXITING\n");
exit(0);

default:
printf("!!!INVALID INPUT!!!");
}
}

return 0;}


void push(int stack[MAX])
{char ch='y';
int item;
while(ch=='y'||ch=='Y'){

if(top==MAX)
{printf("stack is full!!!\n");
return; 
}
printf("enter the value you want to insert:\n");
scanf("%d",&item);

top+=1;
stack[top]=item;
printf("do you want to enter more items:y/n\n");
scanf(" %c",&ch);
}
}
void pop(int stack[MAX])
{int item;
if(top==-1)
{printf("list is empty\n");
return;
}
item=stack[top];
top=top-1;
printf("the deleted item is %d\n",item);
}
void traverse(int stack[MAX])
{int i;
i=top;

if(i==-1)
{printf("list is empty\n");
return;}
while(i!=-1)
{
printf("%d\n",stack[i]);
i-=1;
}
}

