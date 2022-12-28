#include<stdio.h>
int main()
{
	int n,i,j,x,y;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int t,s;
	for(i=0;i<n;i++)											
	{																
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	    	printf("%d",a[n/2]);
}