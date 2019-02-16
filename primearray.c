//program to find prime numbers till fifty using array
#include<stdio.h>
#include<stdbool.h>
int main()
{bool isprime;
int primes[50],primeindex=2,p,i;
primes[0]=2;
primes[1]=3;
for(p=5;p<=50;p=p+2)
{
isprime=true;
for(i=1;isprime && p/primes[i]>=primes[i];++i)
if(p%primes[i]==0)
isprime=false;

if(isprime==true)
{primes[primeindex]=p;
++primeindex;
}

}

for(i=0;i<primeindex;++i)
printf("%d\n",primes[i]);

return 0;}
