#include <stdio.h>
#include "string.h"
void fun(char *s[],int n)
{
    char *t;int i,j;
    for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
    if(strlen(s[i])>strlen(s[j]))
    {
        t=s[i];s[i]=s[j];s[j]=t;
    }
}
main()
{
    char *ss[]={"bcc","bbcc","xy","aaaacc","aabcc"};
    fun(ss,5);
    printf("%s,%s\n",ss[0],ss[4]);
}