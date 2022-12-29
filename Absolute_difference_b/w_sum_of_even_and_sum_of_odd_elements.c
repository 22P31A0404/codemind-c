#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,es=0,rs=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        es=es+a[i];
        else
        rs=rs+a[i];
    }
    printf("%d",abs(rs-es));
}