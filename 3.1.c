#include <stdio.h>
#include <limits.h>
int main()
{
   int n,b,max,i;
   max=INT_MIN;
   scanf("%d",&n);
   for (i=1;i<=n;i++)
    { 
      scanf("%d",&b)
      if (b>=max) 
      { 
         max=b;
      }
    }
  printf("%d\n",max);
  return 0;
}  
