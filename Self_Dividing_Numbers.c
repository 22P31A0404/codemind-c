#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        int q,c,tc;
        q=i;
        c=0;
        tc=0;
        while(q!=0)
        {
            int r;
            c=c+1;
            r=q%10;
            if(r!=0&&i%r==0)
            {
                tc=tc+1;
            }
            q=q/10;
        }
        if(c==tc)
        {
            printf("%d ",i);
        }
    }
}