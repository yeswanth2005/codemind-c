#include<stdio.h>
int m(int,int);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int res=m(a,b);
    printf("%d",res);
}
int m(int a,int b)
{
    int c;
    c=a*b;
    return c;
}