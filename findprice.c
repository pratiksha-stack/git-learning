#include <stdio.h>
int main()
{
    int p, q, r, j;
    scanf("%d %d %d %d", &p, &q, &r, &j);
    int m = (p * r) + (q * j);
    printf("%d", m);
    return 0;
}