#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int last_digit = N % 10;
    int first_digit = N;
    while (first_digit >= 10)
    {
        first_digit = first_digit / 10;
    }
    int sum = first_digit + last_digit;
    printf("%d
", sum);
    return 0;
}