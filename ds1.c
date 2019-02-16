#include<stdio.h>
#include<stdlib.h>
#define MAX 10
//for create
void create(int []);
// for traverse
void traverse(int []);
//for insertion
void insertion(int [],int,int);
//for deletion
void deletion(int [],int,int);
//for sort
void Selc_Sort(int []);
void Bubble_Sort(int []);
//for search
void L_Search(int [],int);//linear search
void B_Search(int [],int);//binary search
//global declaration
int N;
//program initiation
int main()
{int choice,a[MAX],item,pos,choice1,choice2;
//to take the array input
create(a);
//infinite loop
while(1)
{
//MENU

printf("\t\tMENU\n\n");

printf("\t\t\t1.TRAVERSING\n");

printf("\t\t\t2.INSERTION\n");

printf("\t\t\t3.DELETION\n");

printf("\t\t\t4.SEARCH\n");

printf("\t\t\t5.SORT\n");

printf("\t\t\t6.EXIT\n");

//taking input for choice
printf("enter your choice:\n");
scanf("%d",&choice);

switch(choice)
{case 1:
printf("TRAVERSING\n");
traverse(a);
break;

case 2:
printf("INSERTION\n");
insertion(a,pos,item);
break;

case 3:
printf("DELETION\n");
deletion(a,pos,item);
break;

case 4:
{printf("SEARCH\n");
//input choice for search
printf("choose the type of search you want to apply\n");
printf("1.Linear Search\n");
printf("2.Binary Search\n");
printf("3.Exit\n");

printf("enter your choice:\n");
scanf("%d",&choice1);
switch(choice1)
{case 1:
{printf("LINEAR SEARCH:\n");
L_Search(a,item);
break;
}
case 2:
{printf("BINARY SEARCH:\n");
B_Search(a,item);
break;
}
case 3:
{printf("Exit\n");
exit(0);
}
default:
{printf("!!!Invalid input!!!\n");
break;}
break;
}
}
case 5:
printf("SORT\n");
//input choice for sort
printf("\t\t1.Selection\n");
printf("\t\t2.Bubble\n");
printf("\t\t3.Insertion\n");
printf("\t\t4.Exit\n");
printf("which sort do you want to apply:\n");
scanf("%d",&choice2);
switch(choice2)
{
case 1:
printf("SELECTION SORT\n");
Selc_Sort(a);
break;

case 2:
printf("BUBBLE SORT\n");
Bubble_Sort(a);
break;

case 3:
printf("INSERTION SORT\n");
break;

case 4:
printf("Exit\n");
exit(0);
break;

default:
printf("invalid input\n");

}
break;

case 6:
printf("EXIT\n");
exit(0);

default:
printf("WARNING:!!!invalid value!!!\n");

}

}
return 0;}
//end of main function

//function definitions
void create(int a[])
{int i;
//array limit
printf("Enter the array limit:\n");
scanf("%d",&N);
//for array values
printf("enter the array values:\n");
for(i=0;i<N;i++)
{printf("\nfor array element a[%d]=",i);
scanf("%d",&a[i]);
}
}

void traverse(int a[])
{int i;
printf("Traversing the array elements:\n");
for(i=0;i<N;i++)
{printf("\na[%d]=%d",i,a[i]);
}
}

void insertion(int a[],int pos,int item)
{int i;
//taking input of position and item value
printf("enter the position and item:\n");
scanf("%d%d",&pos,&item);
if(pos>N||pos<1)
{printf("!!!invalid input!!!\n");
return;}
else{

for(i=N-1;i>=pos-1;i--)
{a[i+1]=a[i];
}
a[pos-1]=item;
N=N+1;
printf("hence the new array is:\n");
for(i=0;i<N;i++)
{printf("\na[%d]=%d",i,a[i]);}
}
}

void deletion(int a[],int pos,int item)
{int i;
//input for position
printf("enter the position:\n");
scanf("%d",&pos);
item=a[pos-1];
for(i=pos-1;i<=N-1;i++)
{a[i]=a[i+1];
}
N=N-1;
printf("the deleted item was %d\n",item);
printf("the new array is:\n");
for(i=0;i<=N-1;i++)
{printf("\na[%d]=%d",i,a[i]);
}
}

void L_Search(int a[],int item)
{int i;
printf("enter the item you want to search:\n");
scanf("%d",&item);
for(i=0;i<N;i++)
{if(a[i]==item)
break;
}
if(i==N)
printf("sorry the item is not present in the list!!!\n");
else
printf("the item is found at position %d\n",i+1);
}

void B_Search(int a[],int item)
{int i,mid,end,beg;
printf("enter the item you want to find:\n");
scanf("%d",&item);
beg=0;
end=N-1;
while(a[end]>a[beg])
{mid=end+beg/2;
if(a[mid]==item)
break;
if(item>a[mid])
{beg=mid+1;
end=N-1;
}
else if(item<a[mid])
{end=mid-1;
beg=0;}
}
printf("item was found at %d position!!!",mid+1);
}

void Selc_Sort(int a[])
{int temp,i,j;
for(i=0;i<=N-2;i++)
{for(j=i+1;j<=N-1;j++)
{if(a[i]>a[j])
{temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("sorted array is:\n");
for(i=0;i<=N-1;i++)
{printf("\na[%d]=%d",i,a[i]);
}
}

void Bubble_Sort(int a[])
{int temp,i,j;
for(i=0;i<N-1;i++)
{for(j=0;j<N-i-1;j++)
{if(a[j]>a[j+1])
{temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("new sorted array is:\n");
for(i=0;i<N;i++)
printf("\na[%d]=%d",i,a[i]);
}

















































