#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,x;
    scanf("%d%d%d",&a,&b,&c);
    x=((b*1)+(c*2));
    if(x>=a)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}