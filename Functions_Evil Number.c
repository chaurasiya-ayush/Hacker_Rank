#include <stdio.h>

int is_evil_number(int n) {
    int count=0;
    int c;
   for(int i=0;i<=31;i++){
       c = (n>>i)&1;
       if(c==1){
           count++;
       }
   }
  if(count%2==0){
      return 1;
  }
   
   return 0;
}

int main() {
    int n;
    scanf("%d", &n); 
    printf("%d\n", is_evil_number(n));
    return 0;
}