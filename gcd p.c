#include <stdio.h>
int main()
{
	int a, b, g; // variable declaration
	printf(" Enter two numbers: ");
	scanf("%d%d", &a, &b);
	while (b != 0)
	{
	    g = b;
	    b = a % b;
	    a = g;
	}
	printf(" The highest Common Factor is : %d", a);
	return 0;
}
