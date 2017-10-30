#include <stdio.h>
#include <stdlib.h>


int fact (int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}





int main()
{
    int n, i, m;
    scanf("%d", &n);

    printf("%d ", 1);
    for (i = 1; i < n; i++)
    {
        m = fact(n) / (fact(i) * fact(n - i));
        printf("%d ", m);
    }
    printf("%d", 1);


    return 0;
}
