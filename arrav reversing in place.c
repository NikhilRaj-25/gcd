#include<stdio.h>
int main()
{
	int n,i,j,b;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	printf("Enter array elements: \n");
	int arr[n];
	for( i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}	
	for(i=0, j=n-1; i < j; i++, j--)
	{
		b = arr[i];
		arr[i] = arr[j];
		arr[j] = b;
	}
	printf("Reversed array elements are: \n");
	for(i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}	
	return 0;
}
