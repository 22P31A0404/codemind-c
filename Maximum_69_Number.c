#include<stdio.h>
int main()
{
    int n,a[100],b,i=0,j,k;
    scanf("%d",&n);
    for(k=n;k>0;k=k/10)
    {
        b=k%10;
        a[i]=b;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        if(a[j]==6)
        {
            a[j]=9;
            break;
        }
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
}