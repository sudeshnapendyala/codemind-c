#include<stdio.h>
int main()
{
    int x,b;
    scanf("%d",&x);
    b=x/10;
    if(x%10==0)
    {
        printf("%d",b);
    }
    else if(x%5==0)
    {
        printf("%d",b+1);
    }
    else
    {
        printf("-1");
    }
}