#include<stdio.h>
int s(int,int);
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int res=s(x,y);
    printf("%d",res);
}
int s(int x,int y)
{
    int o;
    o=2*x-y;
    return o;
}