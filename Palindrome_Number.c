#include<stdio.h>
int main()
{
    int n,q,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int m,t,r,s=0;
        scanf("%d",&m);
        t=m;
        while(t!=0)
        {
            r=t%10;
            s=s*10+r;
            t=t/10;
        }
        if(s==m)
        {
            printf("True
");
        }
        else 
        {
            printf("False
");
        }
    }
}
