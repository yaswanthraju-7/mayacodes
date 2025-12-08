#include <stdio.h>

int main() {
    int x, y, M;
        scanf("%d %d %d", &x, &y, &M);

            long long result = 1;

                for (int i = 0; i < y; i++) {
                        result = (result * x) % M;
                            }

                                printf("%lld
", result);

                                    return 0;
                                    }