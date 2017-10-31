#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int q, k, i, j, n, w;
    double l, l0, x[1000], y[1000];
    int a[1000] = {0};
    q = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%lg%lg", &x[i], &y[i]);
    }
    a[0] = 1;
    for (i = 0; i < n - 1; i++)
    {
        k = 0;
        while (a[k])
            ++k;
        l0 = (x[q] - x[k]) * (x[q] - x[k]) + (y[q] - y[k]) * (y[q] - y[k]);
        w = k;
        for (j = k + 1; j < n; j++)
        {
            if (!a[j] && q != i)
            {
                l0 = (x[q] - x[j]) * (x[q] - x[j]) + (y[q] - y[j]) * (y[q] - y[j]);
                if (l > l0)
                {
                    l = l0;
                    w = j;
                }
            }
        }
        printf("%d ", q + 1);
        q = w;
        a[w] = 1;
    }
    printf("%d", n);
}
