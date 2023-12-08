#include<stdio.h>
int sd(int a,int b);
int main()
{
    int t,a,b,f=1,r,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        f=0;
        int t=i;
        while(t!=0)
        {
            r=t%10;
            if(r==0 || i%r!=0)
            {
                f=1;
            }
            t/=10;
        }
        if(f==0)
        {
        printf("%d ",i);
        }
    }
    
}