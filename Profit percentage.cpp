#include<stdio.h>
int main()
{
    int cp, sp;
    double profit, per;
    scanf("%d %d", &cp, &sp);
    profit = sp - cp;
    per = (profit / cp) * 100.0;
    printf("%.2f", per);
    return 0;
}