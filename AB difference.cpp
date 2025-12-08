#include <stdio.h>
#include <stdlib.h>

int main() {
    int A, B;
        scanf("%d %d", &A, &B);

            int correct_answer = A + B;
                int vijays_output = A * B;
                    int difference = correct_answer - vijays_output;

                        printf("%d
", abs(difference));

                            return 0;
                            }