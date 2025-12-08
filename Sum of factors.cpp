#include<stdio.h>
int main()
{
    int N, i;
    int sum_of_factors = 0;
    scanf("%d", &N);
    for(i = 1; i < N; i++)
    {
        if ( N % i == 0)
        {
            sum_of_factors = sum_of_factors + i;
        }
    }
    printf("%d
", sum_of_factors);
    return 0;
}
