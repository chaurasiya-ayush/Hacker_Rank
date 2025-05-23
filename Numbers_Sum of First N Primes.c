#include <stdio.h>
#include <math.h>


int is_prime(int n) {
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
    int n, sum = 0, count = 0, num = 2;
    scanf("%d", &n);
    while (count < n) {
        if (is_prime(num)) {
            sum += num;
            count++;
        }
        num++;
    }

    printf("%d\n", sum);

    return 0;
}
