#include<stdio.h>
int main()
{
    int n,m,i;
    scanf("%d%d%d",&n,&m,&i);
    for(i=1;i<=m;i++)
    {
        if((i%2)!=0)
        {
            printf("%d x %d = %d
",n,i,i*n);
        }
    }
}