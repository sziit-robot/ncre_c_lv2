#include <stdio.h>
#define F(x) 2.84+x
#define w(y) printf("%d",(int)(y))
#define P(y) w(y)
main()
{
    int x=2;
    P(F(5)*x);
}