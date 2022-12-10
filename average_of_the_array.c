#include<stdio.h>
int main()
{
    int N,i,a[N];
    scanf("%d",&N);
    float avg=0;
    for(i=1;i<=N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=N;i++)
    {
        avg=avg+a[i];
    }
    printf("%0.2f",avg/N);
}