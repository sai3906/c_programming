#include<stdio.h>
void main(){
  int a=5;
  for(int i=a;i>0;i--){
    for(int j=i;j>0;j--){
      printf("* ");
    }
    printf("\n");
  }
}
