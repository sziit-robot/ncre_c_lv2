#include <stdio.h>
main()
{
    int c;
    while(c=getchar()!='\n')
    {
        switch(c-'3')
        {
            case 0:
            case 1:putchar(c+4);
            case 2:putchar(c+4);break;
            case 3:putchar(c+3);
            case 4:putchar(c+3);break;
         
        }
    }
    printf("\n");
}