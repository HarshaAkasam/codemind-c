#include<stdio.h>
int main()
{
    int n,rev=0,remainder=0;
    scanf("%d",&n);
    while(n!=0)
    {
        remainder=n%10;
        rev=rev*10+remainder;
        n/=10;
    }
    printf("%d",rev);
}