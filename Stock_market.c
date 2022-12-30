#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        if (a>b)
        {
            printf("LOSS
");
        }
        else if(a<b)
        {
            printf("PROFIT
");
        }
        else
        {
            printf("NEUTRAL
");
        }
    }
}