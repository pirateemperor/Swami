#include<stdio.h>
#include<stdlib.h>
void push(void);
void show(void);
void pop(void);
//defining structure for node of the stack
struct node
{int info;
struct node *link;
};
struct node *top=NULL;

int main()
{int ch;

while(1)
{
printf("MENU:\n");
printf("1.PUSH\n");
printf("2.POP\n");
printf("3.Display\n");
printf("4.EXIT\n");
printf("enter your choice:\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("push!!\n");
push();
break;

case 2:
printf("pop\n");
pop();
break;

case 3:
printf("Display\n");
show();
break;

case 4:
printf("EXITING\n");
exit(0);
break;

default:
printf("INVALID INPUT!!!\n");
break;
}

}




return 0;}

void push()
{
int item;
printf("enter the info you want to enter in stack:\n");
scanf("%d",&item);

struct node *tmp;
tmp=(struct node*)malloc(sizeof(struct node));

if(tmp==NULL)
{printf("overflow!!\n");
exit(0);
}

tmp->info=item;

if(top==NULL)
{
top=tmp;
top->link=NULL;
}

else if(top!=NULL)
{tmp->link=top;
top=tmp;
}
printf("the new stack is\n");
show();

}

void show()
{struct node *ptr;

if(top==NULL)
{printf("stack is empty!!!\n");
}

else
{ptr=top;

while(ptr!=NULL)
{printf("%d\n",ptr->info);
ptr=ptr->link;
}
}

}

void pop()
{struct node *tmp;
int item;
//if stack is empty
if(top==NULL)
{printf("stack is empty!!!\n");
}
//if stack contains some elements
else
{item=top->info;
tmp=top;
top=top->link;
}
printf("the new stack is:\n");
show();
printf("the deleted elements is %d:\n",item);
free(tmp);

}

















