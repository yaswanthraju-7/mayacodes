#include<stdio.h>
int main()
{
    int N;
    int largest_digit = 0;
    int digit;
    scanf("%d", &N);
    if (N == 0)
    {
        printf("0
");
        return 0;
    }
    while ( N > 0)
    {
        digit = N % 10;
        if (digit > largest_digit)
        {
            largest_digit = digit;
        }
        N = N/10;
    }
    printf("%d
", largest_digit);
    return 0;
}