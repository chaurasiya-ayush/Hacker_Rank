#include<stdio.h>
int  numPrint(int a){
   for(int i=2;i<a;i++){
       if(a%i==0){
           return 0;
       }
   }
   return 1;
}
int main()
{
    int n,count=0,a;
    scanf("%d",&n);
    for(int i=2;count<n;i++){
        if(numPrint(i)){
            a=i;
            count++;
        }
    }
    printf("%d",a);
}
