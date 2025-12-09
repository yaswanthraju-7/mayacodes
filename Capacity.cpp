#include<stdio.h>
int main()
{
    int T, S, B;
    long long capacity_kb;
    scanf("%d %d %d", &T, &S, &B);
    capacity_kb = (long long)T * S * B;
    printf("%lld KB
", capacity_kb);
    return 0;
}