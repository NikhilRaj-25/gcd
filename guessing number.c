#include<stdio.h>
void main()
{
	int a,i,b,c,count=0,mid,high=1000,low=1;
	mid=(low+high)/2;
	printf("Assume A Number Between 1 To 1000 \n");
	printf("Enter your Answer in this manner \n 1.Yes,Correct \n 2. Less than my number \n 3.Greater than my number");
	printf("\n Is Assumed number is \n GUESS 1 : %d\n",mid);
	for(i=2;i<=10;i++)
	{
		scanf(" %d",&b);
		if(b==1)
		{
			break;
		}
		else if(b==2)
		{
			high=mid;
			mid=(low+high)/2;
			printf("Guess %d : %d \n",i,mid);
		}
		else if(b==3)
		{
			low=mid;
			mid=(low+high)/2;
			printf("Guess %d : %d \n",i,mid);
		}
		count++;
	}
	printf("\n Hurrah!!! Finally I Found The Number\n");
	printf("\nTotal Number Of Guesses are : %d",count+1);
}
