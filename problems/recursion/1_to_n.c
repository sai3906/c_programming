#include<stdio.h>
void print_n(int, int);
int main(){
  printf("enter n\n");
  int n;
  scanf("%d",&n);
  printf("\n\n");
  print_n(1,n);
  return 0;
}
void print_n(int i,int n){
  printf("%d\n",i);
  if(i<n )print_n(i+1,n);
  else return;
  
}

