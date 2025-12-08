#include<stdio.h>
int main()
{
    int N;
    if(scanf("%d",&N) !=1) return 1;
    long long sum = (long long)N * (N+1) /2;
    printf("%lld
",sum);
    return 0;
}