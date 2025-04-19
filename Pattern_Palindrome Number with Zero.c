#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,l;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        l=i;
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
           if(l-j>=0){
                printf("%d",l-j);
           }
            else{
                 printf("%d",-1*(l-j));
            }
        }
        printf("\n");
    }
    return 0;
}