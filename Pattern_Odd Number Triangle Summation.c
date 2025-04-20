#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int temp=1,sum=0,num=1;
    for(int i=1; i<=n; i++) {
        for(int k=1; k<=(2*(n-i)); k++) {
            printf(" ");
        }           sum=0;
                for(int j=1;j<=(2*i-2);j++){
                    num +=2;
                   sum +=num; 
                }
                
        for(int j=1; j<=(2*i-1); j++) {
            if(j!=i || j==1) {
                    printf("%d ",temp);
                temp +=2;
                
            
            }
            else {
            printf("%d ",sum);
            }
        }
        printf("\n");
    }
    return 0;
}