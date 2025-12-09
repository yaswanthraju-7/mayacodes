#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    long long sum = 0;
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("%lld
", sum);
    return 0;
}