#include<stdio.h>
int main()
{
    int a,b,c,i,d=0;
    scanf("%d %d %d",&a,&b,&c);
    for(i=a;i<=b;i++)
    {
        if(i%c==0)
        {
            d++;
        }
    }
    printf("%d",d);
    return 0;
}
