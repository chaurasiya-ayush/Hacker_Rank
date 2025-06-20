#include <stdio.h>

int find_unique_digit_product(int n) {
    
    int rem, copy;
    int product=1;
    
    if(n==0)
        return 0;
    
    for(int i=0;i<=9;i++){
         copy=n;
         while(copy!=0){
           rem=copy%10;
           if(rem==i){
              product*=i;
               break;
            }
          copy/=10;
         }
        
    }
  
    return product;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", find_unique_digit_product(n));
    return 0;
}