#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c;
    scanf("%lg%lg", &a, &b);
    if ((tan(a) - a) * (tan(b) - b) > 0)
        printf("-1\n");
    else
    {
        while (b - a > 1e-10)
        {
            c = (a + b) / 2;
            if (tan(c) - c < 0)
                a = c;
            else
                b = c;
        }
        if (fabs(c) < 1e-7)
        {
            printf("%.10lf", 0.0);
        }
        else
        {
            printf("%.10lf", c);
        }

    }
    return 0;
}
