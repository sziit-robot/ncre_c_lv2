fun(int *b,int c,int d)
{
    int k;
    for(k=0;k<c*d;k++)
    {
        *b=c+d;
        b++;
    }
}