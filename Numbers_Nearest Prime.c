#include <stdio.h>
#include <math.h>

int prime(int n) {
    if (n <= 1) return 0; 
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;  

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0; 
        }
    }
    return 1;
}

int main() {
    int N;
    scanf("%d", &N);


    if (prime(N)) {
        printf("%d\n", N);
        return 0;
    }

  
    int lower = N - 1, upper = N + 1;

    while (1) {
        if (lower > 1 && prime(lower)) {
            printf("%d\n", lower);
            break;
        }
        if (prime(upper)) {
            printf("%d\n", upper);
            break;
        }
        lower--;
        upper++;
    }

    return 0;
}
