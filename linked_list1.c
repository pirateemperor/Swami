#include<stdio.h>
#include<stdlib.h>
//function prototype 
void create();
void display();
void deletion();
//node declaration
struct node{
int info;
struct node *link;
};
struct node *start=NULL;
//main fucntion initiation
int main()
{int choice;
//infinite loop
while(1){
//asking user which function does he want to be executed 
printf("what do you want to do !!!\n");
printf("\t1.create\n");
printf("\t2.display\n");
printf("\t3.delete\n");
printf("enter your choice:\n");
scanf("%d",&choice);
//start of switch 1
switch(choice)
{
case 1:
create();
break;

case 2:
display();
break;

case 3:
deletion();
break;
}
//end of switch 1
}

return 0;}

void create()
{int item;
struct node *ptr,*tmp;
char ch='y';
while(ch=='y'||ch=='Y')
{tmp=(struct node*)malloc(sizeof(struct node));
if(tmp==NULL)
{printf("memory overload!!!\n");
exit(0);
}
//input item value in the info
printf("enter item value\n");
scanf("%d",&item);
tmp->info=item;

if(start==NULL)
{start=tmp;
tmp->link=NULL;
}

ptr=start;
while(ptr->link!=NULL)
{ptr=ptr->link;}

ptr->link=tmp;
tmp->link=NULL;


printf("want to enter another node:y/n\n");
scanf(" %c",&ch);
}
}

void display()
{struct node *ptr;
if(start==NULL)
printf("list is empty:\n");

ptr=start;
while(ptr->link!=NULL)
{printf("\t%d",ptr->info);
ptr=ptr->link;
}
printf("\t%d\n",ptr->info);
}

void deletion()
{printf("deletion\n");
struct node *loc,*tmp,*ptr;
int item;
//input to find the item location
printf("enter the info which you want to delete:\n ");
scanf("%d",&item);
if(start==NULL){
printf("list is empty:\n");
exit(0);
}
else if(start->info==item)
{start=start->link;
}
else
{loc=NULL;
ptr=start;
while(ptr->info!=item)
{loc=ptr;
ptr=ptr->link;
if(ptr->link==NULL)
break;
}
if(ptr->link==NULL)
{printf("item not present in the list:\n");
exit(0);
}

loc->link=ptr->link;


}
printf("new list is \n");
display();
}















