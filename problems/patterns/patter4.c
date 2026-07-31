#include<stdio.h>
void main(){
  int a=5;
  for(int i=0;i<a;i++){
    for(int j=0;j<=i;j++){
      printf("%d ",i+1);
    }
    printf("\n");
  }
}
