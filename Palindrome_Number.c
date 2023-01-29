#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int r,s=0,q,n;
        scanf("%d",&n);
        q=n;
        while(q!=0)
    
    {
        r=q%10;
        s=s*10+r;
        q=q/10;
    }
    if(s==n)
    {
        printf("True
");
    }
    else
    {
        printf("False
");
    }
    }
}
