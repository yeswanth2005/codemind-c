#include <stdio.h>

int main() 
{
    int a,b;
    scanf("%d %d",&a,&b);

    int sum=a+b;
    int c= 21-sum;

if (c >= 1 && c <= 10)
{
 printf("%d
",c);
} 
else 
{
   printf("-1
");
 }
}