#include<stdio.h>
int main()
{
	int a,b,i,c,d;
	printf("Enter Money\n");
	scanf("%d",&b);
	scanf("%d",&a);
	int arr[a];
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	d=b;
	for(i=0;i<a;i++)
	{
		c=d/arr[i];
		d=d-arr[i];
		if(d>5)
		{
			printf("%d Notes ----> %d\n",arr[i],c);
		}
		else if(d<=5)
		{
			printf("%d Coins ----> %d\n",arr[i],c);
		}
	}
}
