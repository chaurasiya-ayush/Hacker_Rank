#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",almost_primes(n));
    return 0;
}
int prime_factors(int num) {
    int count = 0;
    for (int i = 2; i<= num/2; i++) {
        while (num % i == 0) {
            count++;
            num /= i;
        }
    }
    if (num > 1) 
        count++; 
    return count;
}
int almost_primes(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (prime_factors(i) == 2) {
            count++;
        }
    }
    return count;
}