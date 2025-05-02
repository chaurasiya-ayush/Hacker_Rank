#include <stdio.h>

int main() {
    long long int N, x = 1, fact = 1;
  
    scanf("%lld", &N);

    if (N < 0) {
        printf("NO\n");
        return 0;
    }

    while (fact < N) {
        x++;
        fact *= x;
    }

    if (fact == N) {
        printf("%lld\n", x);
    } else {
        printf("NO\n");
    }

    return 0;
}
