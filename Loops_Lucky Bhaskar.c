#include <stdio.h>

int main() {
  
    double x, amount, minamount;
    int n, i = 1;
    
    scanf("%lf", &x);
    scanf("%d", &n);
    amount = x;
    minamount = x;
    for(i=1;i<=n;i++){
        if (amount < x * 0.4) {
            printf("Stopped early after %d days: %.2lf\n", i - 1, amount);
            break;
        }
        if (i % 6 == 0) {
            amount += amount * 0.7;
            i += 6; 
        } else if (i % 2 == 0) {
            amount -= amount / 8.0;
        } else if (i % 3 == 0) {
            amount -= amount / 5.0;
        } else {
            amount -= amount * 0.1;
        }
        if (amount < minamount) {
            minamount = amount;
        }
    }
    if (i > n) {
        printf("After %d days: %.2lf\n", n, amount);
    }

    
    printf("Minimum amount held by Bhaskar: %.2lf\n", minamount);

   
    if (amount >= x * 0.7) {
        printf("Lucky Bhaskar\n");
    } else {
        printf("Better Luck Next Time!\n");
    }

    return 0;
}
