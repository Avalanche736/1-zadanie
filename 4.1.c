#include <stdio.h>
#include <stdlib.h>

int main()
{
int comp1 (const void * a, const void * b)
{
return ( *(int*)a - *(int*)b );
}
int n,ma,i;
ma=0;
int m[99999];
int s[99999];
scanf("%d",&n);

for (i=1; i<=n;i++)
{ scanf("%d",&m[i-1]);
scanf("%d",&s[i-1]);
}
qsort(m, n, sizeof(int), comp1);
qsort(s, n, sizeof(int), comp1);

printf("\n");
printf("\n");

for (i=1; i<=n;i++)
{ if (s[i-1]>=ma)
{
printf("%d %d\n",m[i-1],s[i-1]);
ma=ma+m[i-1];
}

}

}
