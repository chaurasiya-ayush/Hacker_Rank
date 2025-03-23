#include <stdio.h>
int main(){
  int n,max;
scanf("%d",&n);
max=n;
printf("%d",n);
    while(n!=1){
        if(n<1){
            n=1;
            if(n>max){
                max =n;
            }
        }
        else if(n%3==0){
            n /=3;
           
           
        }
        else if((n%5==0)&& (n%3!=0)){
            n -= 5;
        }
        else{
            n *=5;
            if(n>max){
                max=n;
            }
            
        }
        printf(" -> %d",n);
    }
   
    printf("\nMax Number: %d",max);
    return 0;
}

