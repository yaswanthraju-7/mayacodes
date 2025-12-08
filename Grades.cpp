#include<stdio.h>
int main()
{
    int P,  C,  B,  M,  CS;
    float sum, percentage;
    scanf("%d %d %d %d %d", &P, &C, &B, &M, &CS);
    sum = P + C +  B + M + CS;
    percentage = (sum / 500.0) * 100.0;
    if (percentage >= 90.0)
    {
        printf("Grade A
");
    }
    else if (percentage >= 80.0)
    {
        printf("Grade B
");
    }
    else if (percentage >= 70.0)
    {
        printf("Grade C
");
    }
    else if (percentage >= 60.0)
    {
        printf("Grade D
");
    }
    else if (percentage >= 40.0)
    {
        printf("Grade E
");
    }
    else{
        printf("Grade F
");
    }
    return 0;
}