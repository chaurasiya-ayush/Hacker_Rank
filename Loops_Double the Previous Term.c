#include <stdio.h>
#include <math.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,add;
    scanf("%d",&n);
    
    if(n>0){
        printf("<");
       for(int i=0;i<n;i++){
        add= pow(2,i);
       if(i==(n-1)){
            printf("%d",add);
       }
        else{
             printf("%d ",add);
        }
    }  
         printf(">");
    }
   
   
    
    return 0;
}