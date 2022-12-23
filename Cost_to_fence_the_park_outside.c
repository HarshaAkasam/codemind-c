#include<stdio.h>
int main()
{
    int l,b,w,c;
    int out;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    out=(l+(2*w))*(b+(2*w));
    int area=out-(l*b);
    printf("%d",area*c);
}