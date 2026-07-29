#include<stdio.h>
int sum_of_n(int);
int main(){
  int n=5;
  int a;
  a=sum_of_n(n);
  printf("\nsum of n is %d \n",a);
}
int sum_of_n(int n){
  int s=0;
  if(s==1) return n;
  s= n + sum_of_n(n-1);
  return s;
}
