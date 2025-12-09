#include<stdio.h>
int main()
{
    int A, B;
    int sum, result;
    scanf("%d %d", &A, &B);
    sum = A + B;
    result = (sum * 10) + 1;
    printf("%d
", result);
    return 0;
}