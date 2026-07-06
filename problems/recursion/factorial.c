#include<stdio.h>
int fact(int);
int main(){
  int n;
  printf("enter n\n");
  scanf("%d",&n);

  int a=fact(n);
  printf("\nn!=%d\n",a);

  return 0;
}
int fact(int n){
  if(n>1){
    n=n*fact(n-1);
    return n;
    }
  else return 1;

}
