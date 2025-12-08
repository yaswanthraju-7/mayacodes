#include<stdio.h>
int main()
{
    int CP_int, SP_int;
    double CP, SP, loss, loss_percentage;
    scanf("%d %d", &CP_int, &SP_int);
    CP = (double)CP_int;
    SP = (double)SP_int;
    loss = CP - SP;
    loss_percentage = (loss / CP) * 100.0;
    printf("%.2lf
", loss_percentage);
    return 0;
}