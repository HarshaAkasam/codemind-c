#include<stdio.h>
int pal(int n)
{
	
	int r=0,temp=n;
	while(n>0)
	{
		r=r*10+n%10;
		n=n/10;
	}
	if(temp==r)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int PalinArray(int x[],int n)
{
    
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(pal(x[i]))
        {
            c++;
        }
        
    }
    if(c==n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    if(n<0)
    {
        n*=-1;
    }
    int x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]<0)
    {
        x[i]*=-1;
    }
    }
    if(PalinArray(x,n))
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}