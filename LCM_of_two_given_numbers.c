#include<stdio.h>
int main()
{
    int a,b,max,flag=1;
    scanf("%d%d",&a,&b);
    max=(a>b)?a:b;
    while(flag)
    {
        if(max%a==0&&max%b==0)
        {
            printf("%d",max);
            break;
        }
        ++max;
    }
}