#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d",&n);
    if(n==0){
        printf("0");
        return 0;
    }
   int position = 1;
while ((n & 1) == 0) {
    n = n >> 1;
    position++;
}
printf("%d",position);
return 0;
}