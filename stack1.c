#define MAX 10
#include<stdio.h>
#include<stdlib.h>
void push(int[],int);
void show(int[]);
void pop(int[]);
int stck[MAX];
int top=-1;

int main()
{int ch1,item;

while(1)
{
//creating MENU
printf("MENU:\n");
printf("\t1.PUSH\n");
printf("\t2.POP\n");
printf("\t3.Display\n");
printf("\t4.EXIT\n");
printf("enter your choice:\n");
//input choices
scanf("%d",&ch1);
//creating switch
switch(ch1)
{

//for PUSH
case 1:
printf("PUSH\n");
//taking item input
printf("enter item which you want to push into the stack:\n");
scanf("%d",&item);
push(stck,item);
break;

//for POP
case 2:
printf("POP\n");
pop(stck);
break;

//for display
case 3:
printf("Display:\n");
show(stck);
break;


//for exit
case 4:
printf("EXITING\n");
exit(0);

//for invalid input
default:
printf("INVALID INPUT!!!\n");
break;

//end of step 17 switch
}

//end of step 7 loop
}

return 0;
}

//defining PUSH function 
void push(int stck[MAX],int item)
{
if(top<MAX)
{top+=1;
stck[top]=item;
printf("the new stack is:\n");
show(stck);

}
else
{printf("stack overflow!!!");
}

}

void show(int stck[MAX])
{
if(top==-1)
{printf("list is empty:\n");
exit(0);
}
for(int i=0;i<=top;i++)
{printf("%d\n",stck[i]);
}
}

void pop(int stck[MAX])
{int item;
if(top==-1)
{printf("stack is empty:\n");
}
else
{item=stck[top];
top-=1;
show(stck);
printf("deleted item is %d\n",item);
}
}












