#include<stdio.h>

struct date{
int day;
int month;
int year;
};
struct account{
int an;
char type;
char name[80];
float balance;
struct date last;
};

struct account customer[100];

static struct account customer={1234,'S',"Swami",235.78,14,04,1998};
int main()
{
return 0;}
