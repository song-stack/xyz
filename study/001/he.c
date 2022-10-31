#include <stdio.h>
int main()
{
	int a[6];
    int max,min;
	int temp;
	int m,n;
	max=a[0];
	min=a[0];
	for(int i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}

	for(int i=0;i<6;i++)
	{
	   	if(max<a[i])
	   	{
	   		max=a[i];
			m=i;
		} 

	   	if(a[i]<min)
	   	{
	   		min=a[i];
			n=i;
		} 
	}

	temp=a[m];
	a[m]=a[n];
	a[n]=temp;
	for(int i=0;i<6;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}

