//doubly linked list
#include<stdio.h>
#include<stdlib.h>
void create(void);
void display(void);
struct node{
int info;
struct node *fwd;
struct node *bck;
};
struct node *start=NULL;
int main()
{int ch;
printf("\nENTER YOUR CHOICE:\n");


printf("\t\t1.create/insert at first.\n");

printf("\t\t2.display.\n");

printf("\t\t3.insert at last.\n");

printf("\t\t4.insert at location.\n");

printf("\t\t5.delete first.\n");

printf("\t\t6.delete last.\n");

printf("\t\t7.delete given node.\n");

printf("\t\t8.delete after the given node.\n");

scanf("%d",&ch);


switch(ch)
{
case 1:
printf("create/insert at first.\n");
create();
break;

case 2:
printf("display\n");
display();
break;

case 3:
printf("insert at last\n");
break;

case 4:
printf("insert at location\n");
break;

case 5:
printf("delete first\n");
break;

case 6:
printf("delete last\n");
break;

case 7:
printf("delete given node\n");
break;

case 8:
printf("delete after a given node\n");
break;

default:
printf("INVALID INPUT\n");
exit(0);


}




return 0;}

//create function
void create(void)
{int item;
char ch1='y';
struct node *tmp;

while(ch1=='y'||ch1=='Y')
{
tmp=(struct node*)malloc(sizeof(struct node));
if(tmp==NULL)
{printf("memory overlow!!\n");
exit(0);
}

//item input
printf("enter the item value:\n");
scanf("%d",&item);
tmp->info=item;
//checking if list is empty
if(start==NULL)
{start=tmp;
tmp->fwd=NULL;
tmp->bck=NULL;
}
else
{start->bck=tmp;
tmp->fwd=start;
tmp->bck=NULL;
start=tmp;
}
printf("want to enter more nodes:y/n\n");
scanf(" %c",&ch1);
}
display();
}
//display function
void display(void)
{struct node *ptr;

if(start==NULL)
{printf("list is empty\n");
exit(0); 
}
else
{ptr=start;
while(ptr!=NULL)
{printf("%d\n",ptr->info);
ptr=ptr->fwd;
}

}
}

















