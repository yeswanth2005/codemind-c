#include<stdio.h>
int t(int,int);
int main()
{
    int b,h;
    scanf("%d%d",&b,&h);
    int res=t(b,h);
    printf("%d",res);
}
int t(int b,int h)
{
    int p;
    p=0.5*b*h;
    return p;
}