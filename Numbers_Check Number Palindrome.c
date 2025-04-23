#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,initial,c,rev=0;
    scanf("%d",&n);
    initial=n;
    while(n!=0){
        c= n%10;
        rev = rev*10 +c;
        n=n/10;
    }
    if(initial==rev){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}