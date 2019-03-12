#include<stdio.h>
#include<stdlib.h>
struct node
{int info;
struct node *link;
}*top=NULL;
void push();
void pop();
void traverse();
int main()
{int choice;
int item;
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
push();
break;

case 2:
printf("POP\n");
pop();
break;

case 3:
printf("TRAVERSE\n");
traverse();
break;


case 4:
printf("EXITING\n");
exit(0);

default:
printf("!!!INVALID INPUT!!!");
}
}

return 0;}


void push()
{struct node *new;
int item;
new=(struct node*)malloc(sizeof(struct node));

if(new==NULL)
{printf("overflow:\n");
exit(0);
}
printf("enter item value:\n");
scanf("%d",&item);
new->info=item;
new->link=top;
top=new;
}
void pop()
{int item;
struct node *tmp;

if(top==NULL)
{printf("list is empty:\n");
exit(0);
}
item=top->info;
tmp=top;
top=top->link;
printf("the deleted item is %d\n",item);
free(tmp);
}

void traverse()
{struct node *tmp;
tmp=top;
if(tmp==NULL)
{printf("list is empty:\n");
exit(0);
}
while(tmp!=NULL){
printf("%d",tmp->info);
tmp=tmp->link;
}
}

