#include <stdio.h>
#include <stdlib.h>
#define N 10
#pragma warning (disable:4996)
void NONO(FILE *fp, int pd[], int n);
 
void fun (int *dp,int n,int upordown)
{
    int temp=0;
    int i=0;
    temp=*dp;
    if(upordown==0)
   {
    for(i=1;i<n;i++)
    {
        if(dp[i]<temp)
        {
            dp[0]=dp[i];
            dp[i]=temp;
            temp=dp[0];
        }
      }
    }
    else if(/******found******/)
   {
    for(/******found******/)
    {
        if(/******found******/)
        {
            /******found******/
            /******found******/
            /******found******/
        }
    }
}
*dp=temp;
 
}
 
void display(int pd[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%4d",pd[i]);
    printf("\n");
}
void main()
{
    int data[N],i,n=N;
    FILE *out ;
 
    out = fopen("out.dat","w") ;
    for(i=0;i<N;i++)
        data[i]=rand()%90+10;
    for(i=0;i<N-1;i++)
        fun(data+i,n-i,0);
    display(data,n);
    NONO(out, data, n);
    for(i=0;i<N;i++)
        data[i]=rand()%90+10;
    for(i=0;i<N-1;i++)
        fun(data+i,n-i,1);
    display(data,n);
    NONO(out, data, n);
    fclose(out);
}
void NONO(FILE *fp, int pd[], int n)
{
    int i;
    for(i=0;i<n;i++)
        fprintf(fp, "%4d", pd[i]);
    fprintf(fp, "\n");
 
}