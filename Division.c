#include<stdio.h>
int d(int,int);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int res=d(a,b);
    printf("%d",res);
}
int d(int a,int b)
{
int c;
c=a/b;
return c;
}