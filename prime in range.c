#include <stdio.h>
int main()
{
   int a,b,n,i,j;
   scanf("%d%d",&a,&b);
   for(i=a; i<=b;i++)
   {
      n=0;
      for(j=2; j<=i/2;j++)
      {
         if(i%j==0)
         {
            n=1;
            break;
         }
      }
      if(n==0)
        {
        	 printf("%d\n",i);
		}
  }
  return 0;
}
