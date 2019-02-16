#include<stdio.h>
#include<Bool.h>
int is_anagram(const char*, const char*);
int main()
{char *test,*original;

return 0;
}

int is_anagram(const char *test, const char *original)
{int i,count,j;
count=0;
if(strlen(test)==strlen(original))
{
for(i=0;i<strlen(test);i++)
{for(j=0;j<strlen(test);j++)
{if(test[i]==original[j])
{count=count+1;
break;
}
}
}
if(count==strlen(test))
return true;
else
return false;
}
else
return false;
}
