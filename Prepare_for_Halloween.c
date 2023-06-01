#include<stdio.h>
int main()
{
    int t,x,y;
    scanf("%d
",&t);
    while(t)
    {
        scanf("%d %d",&x,&y);
        if(x*2>y*5)
        {
            printf("Chocolate
");
        }
        else if(x*2==y*5)
        {
            printf("Either
");
        }
        else if(x*2<y*5)
        {
            printf("Candy
");
        }
        t--;
    }
}
