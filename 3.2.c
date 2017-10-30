#include <stdio.h>
#include <stdlib.h>

int main()
{   int a, b, i, buf, n;
    a = 1;
    b = 1;
    scanf("%d", &n);
    if (n==1||n==2)
    {
        printf("%d", 1);
    }
    else
    {
        for(i = 1; i <= n - 2; i++)
        {
            buf = b;
            b = a + b;
            a = buf;
        }
        printf("%d", b);
    }



    return 0;
}
