#include<stdio.h>
int main()
{
    int M,N;
    scanf("%d %d", &M, &N);
    int a = M;
    int b = N;
    int temp;
    while( b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    long long lcm = ((long long)M * N) / a;
    printf("%lld
",lcm);
    return 0;
}