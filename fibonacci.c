#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,d,c;
    scanf("%d",&n);
    d=n;
    printf("%d %d ",a,b);
    while(d>2)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
        d--;
    }
}