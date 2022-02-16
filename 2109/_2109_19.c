main()
{
    int a=-5,b=1,c=1;
    int x=0,y=2,z=0;
    if(c>0)
    x=x+y;
    if(a<=0)
    {
        if(b>0)
        if(c<=0)
        y=x-y;
    }
    else if(c>0)
    y=x-y;
    else z=y;
    printf("%d,%d,%d\n",x,y,z);
}