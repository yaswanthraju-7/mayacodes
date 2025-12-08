#include<stdio.h>
int main()
{
    int N;
    int reversed_N = 0;
    int digit;
    scanf("%d", &N);
    while (N != 0)
    {
        digit = N % 10;
        reversed_N = reversed_N * 10 + digit;
        N = N / 10;
    }
    printf("%d
", reversed_N);
    return 0;
}