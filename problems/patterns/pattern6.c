#include<stdio.h>
void main(){
  int a=5;
  for(int i=a;i>0;i--){
    for(int j=0;j<i;j++){
      printf("%d ",j+1);
    }
    printf("\n");
  }
}
