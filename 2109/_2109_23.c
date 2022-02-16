#include <stdio.h>
main()
{
    int a=0,b=1,c=2;
    if(++a>0||++b>0)
    ++c;
    printf("%d,%d,%d",a,b,c);
}