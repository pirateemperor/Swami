#include<stdio.h>
#include<stdlib.h>
//function prototypes
void create();
void display();
struct node{
int info;
struct node *link;};
struct node *start=NULL;
int main()
{
//function call
create();
display();



return 0;}

//node creating function
void create()
{struct node *ptr,*tmp;
char ch='y';
int item;

//to create an odd loop
while(ch=='y'||ch=='Y'){
//creating a new node named as tmp
tmp=(struct node*)malloc(sizeof(struct node));

if(tmp==NULL)
{printf("!!!MEMORY OVERFLOW!!!\n");
exit(0);}
//taking info value for the node
printf("enter the info for the node:\n");
scanf("%d",&item);
tmp->info=item;
//checking whether its one or more than one nodes
if(start==NULL)
start=tmp;

else
{ptr=start;
//loop to the end node
while(ptr->link!=NULL)
ptr=ptr->link;

ptr->link=tmp;
}
//asking for another loop
printf("want to add another node??y/n\n");
scanf(" %c",&ch);
} 
}
//linked list traversing function
void display()
{struct node *ptr;

if(start==NULL)
{printf("list is empty\n");
exit(0);
}
else
ptr=start;
while(ptr!=NULL)
{printf("\tinfo=%d",ptr->info);
ptr=ptr->link;
}


}





