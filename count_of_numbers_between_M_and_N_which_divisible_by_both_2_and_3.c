#include<stdio.h>
int main()
{
    int m,n,i,count=0;
    scanf("%d%d%d",&m,&n,&i);
    for(i=m;i<n;i++)
    {
        if(i%2==0&&i%3==0)
        {
            count++;
        }
    }
    printf("%d",count);
}