#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

float length (int x, int y, int x1, int y1)
{
    return sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
}
float plosh (float a, float b, float c)
{
   if (a > b && a > c)
   {
       return b*c;
   }
   else
   {
       if (b > a && b > c)
       {
           return a*c;
       }
       else
       {
           return a*b;
       }
   }
}




int main()
{
  int x1, y1, x2, y2, x3, y3, x4, y4;
  float a, b, c;


  scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
  a = length (x1, y1, x2, y2);
  b = length (x1, y1, x3, y3);
  c = length (x1, y1, x4, y4);
  a = plosh (a, b, c);
  printf ("%f", a);

}
