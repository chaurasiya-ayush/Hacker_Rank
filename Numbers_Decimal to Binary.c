#include<stdio.h>
int main(){
    int n,c,arr[256];
    int k=0;
    scanf("%d",&n);
    printf("Binary equivalent of %d: ",n);
    if(n==0){
        printf("0");
    }
    while(n!=0){
        c=n%2;
        arr[k]=c;
        n=n/2;
        k++;
    }
    for(int i=k-1;i>=0;i--){
        printf("%d",arr[i]);
    }
}
