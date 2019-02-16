#define MAX 100
#include<stdio.h>
#include<stdlib.h>
int main()
{int a[MAX][MAX],b[MAX][MAX],i,j,row1,column1,row2,column2;
char choice;
//input for the number of rows and columns for 1st array
printf("Enter the number of rows and columns for the array a:\n");
scanf("%d%d",&row1,&column1);
for(i=0;i<row1;i++)
{
for(j=0;j<column1;j++)
{printf("enter the value for the element on the position a[%d][%d]\n",i+1,j+1);
scanf("%d",&a[i][j]);
}
printf("\n");
}
//traversing 1st matrix
printf("the first matrix is\n");
for(i=0;i<row1;i++)
{
for(j=0;j<column1;j++)
{printf("%d\t",a[i][j]);
}
printf("\n");
}
 

//input for the number of rows and columns for 2nd array
printf("Enter the number of rows and columns for the array b:\n");
scanf("%d%d",&row2,&column2);
for(i=0;i<row2;i++)
{
for(j=0;j<column2;j++)
{printf("enter the value for the element on the position a[%d][%d]\n",i+1,j+1);
scanf("%d",&b[i][j]);
}
printf("\n");}

//traversing 2nd matrix
printf("the 2nd matrix is\n");
for(i=0;i<row2;i++)
{
for(j=0;j<column2;j++)
{printf("%d\t",b[i][j]);
}
printf("\n");
}
printf("want to multiply these two matrices:y/n:\n");
scanf("%c",&choice);
switch(choice)
{case N:
case n:
exit(0);
case Y:
case N:
if(column1==row2)
multiply_matrix(a,b);
else
printf("these two matrix can't be multiplied!!!\n");
}
return 0; }
