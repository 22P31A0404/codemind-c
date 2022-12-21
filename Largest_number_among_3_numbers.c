#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>c&&a>b)
    {
        printf("%d",a);
    }
    else
    {
        printf("%d",c);
    }
}