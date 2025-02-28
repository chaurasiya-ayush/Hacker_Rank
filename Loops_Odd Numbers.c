#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(i%2!=0){
            printf("%d ",i);
        }
    }
    return 0;
}