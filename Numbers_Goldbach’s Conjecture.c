#include <stdio.h>
int prime(int a)
{    if(a<2) return 0;
    for(int i=2; i*i<=a; i++) {
        if(a%i==0) {
            return 0;
        }

    }
    return 1;
}

int main()
{
    long long int n;
    int flag=0;
    scanf("%lld",&n);
    if (n < 4 ||  n % 2 != 0) {
        printf("No Solution\n");
        return 0;
    }
    for(int i=2; i<=n; i++) {
        if(prime(i)==1 && prime(n-i)==1) {
            printf("%d %lld",i,n-i);
            printf("\n");
            return 0;
        }
        

    }
    
       printf("No Solution\n");  
    // }
    return 0;
}