#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a,d,t,num=0;
    scanf("%d %d %d",&t,&a,&d);
    for(int i=1;i<=t;i++){
        num = (a+(i-1)*d);
        printf("%d ",num);
    }
    return 0;
}