#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, i, j, q, a[99999];
    q = -1;
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; ++i)
        a[i] = 1;
    for (i = 0; i < n; ++i)
    {
        j = 0;
        while (j < m)
        {
            q = (q + 1) % n;
            j = j + a[q];
        }
        a[q] = 0;
        if (i > n - 4)
            printf("%d ", q + 1);
    }
    return 0;
}
