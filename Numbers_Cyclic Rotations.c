#include <stdio.h>
#include <math.h>

int main() {
    int n,rev=0,c,count=0,initial;
    scanf("%d",&n);
     initial =n;
    
    while(initial!=0){
        initial=initial/10;
        count++;
        
    }
for(int i=1;i<=count;i++){
c = n%10;
n = n/10;
rev = c*pow(10,count-1)+n;
    printf("%d\n",rev);
    n=rev;
}

    return 0;
}
