#include <stdio.h>
typedef struct stu
{
    char ID[30];
    char name[20];
    int score[2];
} STU;

int fun(STU *d,int n)
{
    int i,m;
    /******found******/
    ______(1)______;
    for(i=1;i<n;i++)
    /******found******/
        if(d[i].score[0]+d[i].score[1]>________(2)________)
            m=i;
    /******found******/
    ______(3)______;
}
 
void main()
{
    STU a[10]={ "2016500301","李清水",83,92,"2016500336","刘世才",85,94,"2016500371","王子晨",88,88};
    int i,n=3;
    i=fun(a,n);
    printf("%30s%20s%4d%4d",a[i].ID,a[i].name,a[i].score[0],a[i].score[1]);
    printf("\n");
}