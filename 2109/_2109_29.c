#include <stdio.h>
main()
{
    int aa[5][5]={{5,6,1,8},{1,2,3,4},{1,2,5,6},{5,9,10,2}};
    int i,s=0;
    for(i=0;i<4;i++)
    s+=aa[i][2];
    printf("%d",s);
}