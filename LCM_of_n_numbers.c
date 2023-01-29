#include<stdio.h>
int main()
{
    int ar[100],n,i,s,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        //printf("%d",&ar[i]);
        if(ar[i]>max)
        max=ar[i];
        
    }
    //printf("%d",max);
    for(max;max>0;max++)
    {
        for(i=0;i<n;i++)
        {
            //printf("/n%d/n",max%ar[i]);
            if(max%ar[i]!=0)
            {
                s=0;
                break;
            }
            else
            s=1;
        }
        if(s==1)
        {
            printf("%d",max);
            break;
        }
    }
}