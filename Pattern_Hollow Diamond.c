
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n>=2){
          
  for(int i=1;i<=n;i++){
      for(int k=1;k<=n-i;k++){
          printf(" ");
      }
      for(int j=1;j<=(2*i-1);j++){
          if(j==1 || j==(2*i-1) ||i==n || i==j){
              printf("*");
          }
          else{
              printf(" ");
          }
      }
      printf("\n");
  }
//second part
  for(int i=2;i<=n;i++){
      for(int k=1;k<=i-1;k++){
          printf(" ");
      }
      for(int j=1;j<=(2*(n-i)+1);j++){
          if(j==1 || j==(n-i+1) || j==(2*(n-i)+1)){
              printf("*");
          }
          else{
              printf(" ");
          }
      }
      printf("\n");
  }
    }
    else{
        printf("Shape Not Possible");
    }
    return 0;
}
