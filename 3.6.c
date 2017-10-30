#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{
  int x1, y1, x2, y2, x3, y3, x4, y4;


  scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);




  if ((x2 - x1) == 0)
  {
      x2 = fabs(x2 - x3);
  }
  else
  {
      x2 = fabs(x2 - x1);
  }

  if ((y2 - y1) == 0)
  {
      y2 = fabs(y2 - y3);
  }
  else
  {
      y2 = fabs(y2 - y1);
  }

  printf("%d", x2 * y2);



}
