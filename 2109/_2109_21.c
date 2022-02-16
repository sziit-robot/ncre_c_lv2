#include <stdio.h>
main()
{
    int a[]={1,2,3,4},y,*p=&a[3];
    --p;y=*p;
    printf("y=%d\n",y);
}