#include <stdio.h>
int main() {
  
    int n ;
    scanf("%d",&n);
        n = n+1;
    
    for (int i = 0; i < n-1; i++) {
        
     
        for (int j = 0; j < n - i - 2; j++)
            printf(" ");

        
        int val = 1;
        for (int k = 0; k <= i; k++) {
            printf("%d ", val);
          
          
            val = val * (i - k) / (k + 1);  
        }
        printf("\n");
    }

    return 0;
}