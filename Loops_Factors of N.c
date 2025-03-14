#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,num=0;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        if((n%i)==0){
            num++;
            if(num%2!=0){
                if(num==1){
                    printf("%d",i);
                }
                else{
                printf(" %d",i);
                    
                }
            }
            }
            
            }
            printf(".");
       
    
    return 0;
}