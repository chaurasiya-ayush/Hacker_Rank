#include <stdio.h>

int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int primeFactorDigitSum(int n) {
    int sum = 0;

  
    while (n % 2 == 0) {
        sum += 2;
        n /= 2;
    }


    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            sum += digitSum(i);
            n /= i;
        }
    }

    if (n > 1) {
        sum += digitSum(n);
    }

    return sum;
}

int isComposite(int n) {
    if (n < 4) return 0; 
    if (n % 2 == 0) return 1; 
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return 1;
    }
    return 0;
}

int is_smith_number(int n) {
    if (!isComposite(n)) return 0; 

    return digitSum(n) == primeFactorDigitSum(n);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", is_smith_number(n));
    return 0;
}
