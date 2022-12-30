#include<stdio.h>
int main()
{
    int n,i,s=0,c,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c==1)
        {
            if(s=1);
            printf("%d",a[i]);
        }
    }
    if(s==0)
    {
        printf("NO Single Number");
    }
}