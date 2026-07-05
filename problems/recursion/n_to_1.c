#include<stdio.h>
void print_n21(int );
int main(){
  int a;
  printf("enter \n");
  scanf("%d",&a);
  printf("\n");
  print_n21(a);
  printf("\n");
  return 0;
}
void print_n21(int a){
  if(a>0){
    printf("%d\t",a);
    print_n21(a-1);  
  }
  else return;
}
