#include<stdio.h>
int main()
{

struct date{
int day;
int month;
int year;
}today,tomorrow;

int dpm[12]={31,28,31,30,31,30,31,31,30,31,30,31}; 

printf("enter today's day,month,year:");
scanf("%d%d%d",&today.day,&today.month,&today.year);

if (today.month==2&&((today.year/4==0&&today.year/100==0)||today.year/400==0))
dpm[1]=29;

if(today.day==dpm[today.month-1])
{if(today.month==12)
{tomorrow.day=1;
tomorrow.month=1;
tomorrow.year=today.year+1;
}

tomorrow.day=1;
tomorrow.month=today.month+1;
tomorrow.year=today.year;
}

printf("tomorrow's date:%d/%d/%d",tomorrow.day,tomorrow.month,tomorrow.year);


return 0;}
