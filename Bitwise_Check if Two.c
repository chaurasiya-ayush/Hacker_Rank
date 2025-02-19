#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,m,num=0;
    scanf("%d",&n);
     scanf("%d",&m);
    num = n^m;
    if(num==0){
       printf("No");  
    }
    else if((num&(num-1))==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}