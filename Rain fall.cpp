#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if (x >= 7)
    {
        printf("HEAVY
");
    }
    else if (x >= 3)
    {
        printf("MODERATE
");
    }
    else{
        printf("LIGHT
");
    }
    return 0;
}