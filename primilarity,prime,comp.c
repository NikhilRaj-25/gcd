#include<stdio.h>
#include<math.h>
int primality_Check(int a)
{
	int g=0,i=2;
	while(i<=sqrt(a))
	{
		if(a%i==0)
		{
			g=1;
			break;
		}
		i++;
	}
	return g;
}
int primes_in_range(int a)
{
	int j=2,g=0;
	while(j<=sqrt(a))
	{
		if(a%j==0)
		{
			g=1;
			break;
		}
		j++;
	}
	return g;
}
int composites_in_range(int a,int b)
{
	int g=0,i,j;
	for(i=2;i<=10;i++)
	{
		if(a%i==0)
		{
			g=1;
			break;
		}
	}
	return g;
}
int main()
{
	int a,b,c;
	printf("Select One From \n1.Primality Check\n2.Primes Numbers in Range\n3.Composites Numbers in Range\n");
	scanf("%d",&a);
	if(a==1)
	{
		printf("Enter A Number\n");
		scanf("%d",&b);
		c=primality_Check(b);
		if(c==0)
		{
			printf("Prime");
		}
		else
		{
			printf("Not a prime");
		}
	}
	else if(a==2)
	{
		int d,i;
		printf("Enter Two Numbers\n");
		scanf("%d%d",&b,&c);
		for(i=b;i<=c;i++)
		{
			if(i==1)
			{
				continue;
			}
			else if(i>1)
			{
				d=primes_in_range(i);
				if(d==0)
				{
				 	printf("%d ",i);
				}
			}
		}
	}
	else if(a==3)
	{
		int g=0,i,j,d;
		printf("Enter Two Numbers\n");
		scanf("%d%d",&b,&c);
		for(i=b;i<=c;i++)
		{
			if(i==1)
			{
				continue;
			}
			else if(i>1)
			{
				d=composites_in_range(i,c);
				if(d==1)
				{
				 	printf("%d ",i);
				}
			}
		}
	}
	return 0;
}
