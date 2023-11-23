#include<stdio.h>
int main()
{
    int i,a,b,c,d=0,e=1;
    scanf("%d",&a);
    b=a;
    while(b!=0)
    {
        c=b%10;
        b=b/10;
        d=d+c;
        e=e*c;
    }
    if(e==d)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}