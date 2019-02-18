#include<stdio.h>
#include<stdlib.h>
//function prototype 
void create();
void display();
void del_beg();
void del_end();
void dup();
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
printf("\t3.delete beginning\n");
printf("\t4.delete end\n");
printf("\t5.delete duplicate\n");
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
del_beg();
break;

case 4:
del_end();
break;

case 5:
dup();
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
{printf("list is empty:\n");
exit(0);}
ptr=start;
while(ptr->link!=NULL)
{printf("\t%d",ptr->info);
ptr=ptr->link;
}
printf("\t%d\n",ptr->info);
}

void del_beg()
{struct node *tmp,*ptr;
if(start==NULL)
{printf("list is empty:\n");
exit(0);
}
else if(start->link==NULL)
{tmp=start;
start=NULL;
printf("the deleted node is %d\n",tmp->info);
free(tmp);
}
else
{tmp=start;
start=start->link;
printf("the deleted node is %d\n",tmp->info);
free(tmp);
}
}
void del_end()
{struct node *ptr,*ptr1,*tmp;
if(start==NULL)
{printf("list is empty:\n");
exit(0);
}

if(start->link==NULL)
{tmp=start;
start=NULL;
printf("the deleted node is %d\n",tmp->info);
free(tmp);
}
else
{ptr1=NULL;
ptr=start;
while(ptr->link!=0)
{ptr1=ptr;
ptr=ptr->link;
}
tmp=ptr;
ptr1->link=NULL;
printf("the deleted node is %d\n",tmp->info);
free(tmp);

}

}

void dup()
{struct node *tmp,*ptr,*ptrp,*ptr1;

if(start==NULL)
{printf("list is empty:\n");
exit(0);
}
if(start->link==NULL)
{printf("only one node is present:\n");
exit(0);
}
ptr=start;
while(ptr->link!=NULL)
{ptrp=ptr->link;
if(ptr->info==ptrp->info)
{tmp=ptrp;
ptr->link=ptrp->link;
free(tmp);
}
while(ptrp!=NULL)
{ptr1=ptrp->link;
if(ptr->info==ptr1->info)
{tmp=ptr1;
ptrp->link=ptr1->link;
free(tmp);
}
}

}


}







