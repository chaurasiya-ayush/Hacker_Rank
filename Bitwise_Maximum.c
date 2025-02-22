#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a,b,c,max;
    scanf("%d",&a);
    scanf("%d",&b);
    c = a-b;
    c = c>>31;
  
   
    max =  (b&(c)) | (a&(~c));
    printf("%d",max);
    return 0;
}