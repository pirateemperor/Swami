#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int *top=-1;
void push(int newstack[MAX],int *top,int item)
{
//list full?
if(*top>=MAX)
{printf("list is full!!!\n");
}
//if list is not full
*top+=1;
newstack[*top]=item;
for(int i=0;i<MAX;i++)
{printf("%d\n",newstack[i]);
}
}

void pop(int newstack[MAX],int *top)
{int item;
//list empty?
if(*top==-1)
{printf("list is empty\n");
return;}
item=newstack[*top];
*top-=1;
printf("the deleted item is:\n");
printf("%d",item);
printf("new stack is:\n");
for(int i=0;i<MAX;i++)
{printf("%d\n",newstack[i]);
}
}


int main()
{int newstack[MAX],item,choice,choice1;
choice1='y';

while(choice1=='y'||'Y')
{
printf("what do you want to do:\n");
printf("MENU:\n");

printf("\t\t1.PUSH.\n");

printf("\t\t2.POP.\n");

printf("enter your choice,1 or 2:\n");
scanf("%d",&choice);

switch(choice)
{

case 1:
printf("PUSH\n");
printf("enter the number you want to enter at the top of the stack:\n");
scanf("%d",&item);
push(newstack,&top,item);
break;


case 2:
printf("POP\n");
pop(newstack,&top);
break;

default:
printf("invalid value!!!");
break;
}
printf("do you want to do more operations??:y/n\n");
scanf("%d",&choice1);
}
return 0;}
















