#include <stdio.h>

void generate_series(int N) {
    int count = 0;
    int num = 1;

    while (count < N) {
        int square = num * num;
        if (square % 3 != 0) {
            printf("%d", square);
            count++;
            if (count < N) {
                printf(" ");
            }
        }
        num++;
    }
    printf("\n");
}

int main() {
    int N;
    scanf("%d", &N);
    generate_series(N);
    return 0;
}
