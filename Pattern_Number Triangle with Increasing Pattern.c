#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);
    int k;
    for(int i=1;i<=n;i++){
         k=i;
        for(int j=1;j<=i;j++){
            printf("%d ",k);
            k +=n-j;
        }
        printf("\n");
    }
    return 0;
}