#include<stdio.h>
int main()
{
    int ar[10],n,mp,i,count;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    i=0;
    mp=ar[i];
    while(i<n)
    {
        if(mp<ar[i])
        mp=ar[i];
        i++;
    }
    while(i)
    {
        i=0;
        count=0;
        while(i<n)
        {
            if(ar[i]%mp==0)
            count++;
            i++;
        }
        if(count==n)
        break;
        else
        mp--;
    }
    printf("%d",mp);
    getchar();
    return 0 ;
}