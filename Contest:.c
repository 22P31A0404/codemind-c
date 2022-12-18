#include<stdio.h>
int main()
{
    int a=1,b=2,x,e,h,n;
    scanf("%d%d%d",&x,&e,&h);
    n=e*a+h*b;
    if(n>=x)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}