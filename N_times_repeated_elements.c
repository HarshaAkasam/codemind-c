#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,c,j,k=0,t;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);//1 2 3 4 5 6 2
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)//i=1<7
    {
        c=0;//c=0
        for(j=0;j<n;j++)//j=0<7
        {
            if(a[i]==a[j])//a[1]=a[0]
            {
                c++;//c=1
                if(i!=j)
                {
                	a[j]=0;
				}
            }
        }
        if(t==c && a[i]!=0)//a[0]=1
        {
            printf("%d ",a[i]);
            k++;
        }
    }
    if(k==0)
    {
        printf("-1");
    }
}