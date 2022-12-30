#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i]==0)
        {
            printf("0 ");
        }
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]==1)
        {
            printf("1 ");
        }
    }
}