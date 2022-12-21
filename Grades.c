#include<stdio.h>
int main()
{
    int per,c,b,m,co,t;
    scanf("%d%d%d%d%d",&per,&c,&b,&m,&co);
    t=per+c+b+m+co;
    per=t*100/500;
    if(per>=90)
    printf("Grade A");
    else if(per>=80)
    printf("Grade B");
    else if(per>=70)
    printf("Grade C");
    else if(per>=60)
    printf("Grade D");
    else if(per>=40)
    printf("Grade E");
    else if(per<40)
    printf("Grade F");
}