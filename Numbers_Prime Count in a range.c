#include <stdio.h>


int is_prime(int n) {
    if(n<=1) return 0;
    if(n<=3) return 1;
    if(n%2==0 || n%3==0) return 0;
    for(int i=5; i*i<=n;i+=6){
       if(n%i==0 || n%(i+2)==0){
           return 0;
       } 
    }
    return 1;
   
}

void count_and_print_primes(int a, int b) {
    int count = 0;
    int secount=0;

     for (int n = a; n <= b; n++) {
        if (is_prime(n)) secount++;
    }
if(secount!=0){
   for (int n = a; n <= b; n++) {
        if (is_prime(n)) printf("%d ", n);
    }
    printf("\n"); 
}
   
    for (int n = a; n <= b; n++) {
        if (is_prime(n)) count++;
    }

    printf("%d\n", count);

   
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    count_and_print_primes(a, b); // Call function

    return 0;
}
