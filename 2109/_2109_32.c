sss(s,t)
char *s,*t;
{
    while((*s)&&(*t)&&(*t++==*s++));
    return (*s-*t);
}