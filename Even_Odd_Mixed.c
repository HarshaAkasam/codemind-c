#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int e=0,o=0;
    while(n!=0)
    {
        if((n%10)%2==0)
        e++;
        else
        o++;
        n=n/10;
    }
    if(e!=0&&o==0)
    printf("Even");
    else if(o!=0&&e==0)
    printf("Odd");
    else if(o!=0&&e!=0)
    printf("Mixed");
}