#include <stdio.h>
#include <stdlib.h>



int main()
{
  int i, n, k;
  k=0;
  scanf("%d", &n);
  for (i = 2; i < n; i++)
  {
      if (n % i == 0)
      {
          k=1;
      }
  }
  if (k == 1)
  {
      printf("sostavnoe");
  }
  else
  {
      printf("prostoe");
  }


}
