#include<stdio.h>
int prime_number(int a)
{
	int i,g=0;
	for(i=2;i<=a/2;i++)
	{
		if(a%i==0)
		{
			g++;
		}
	}
    return g;
}
void main()
{
	int a;
	printf("Select One From \n1.Primality Check\n2.Primes Numbers in Range\n3.Composites Numbers in Range\n");
	scanf("%d",&a);
	if(a==1)
	{
		printf("Enter A Number\n");
		int b,c;
		scanf("%d",&b);
		c=prime_number(b);
		if(c==0)
		{
			printf("Prime Number");
		}
		else
		{
			printf("Not A Prime");
		}
	}
	else if(a==2)
	{
		printf("Enter Two Numbers\n");
		int b,c,i,d;
		scanf("%d%d",&b,&c);
		for(i=b;i<=c;i++)
		{
			d=prime_number(i);
			if(d==0)
			{
				printf("%d ",i);
			}
		}
	}
	else if(a==3)
	{
		printf("Enter Two Numbers\n");
		int b,c,i,d;
		scanf("%d%d",&b,&c);
		for(i=b;i<=c;i++)
		{
			d=prime_number(i);
			if(d!=0)
			{
				printf("%d ",i);
			}
		}
	}
	return 0;
}
