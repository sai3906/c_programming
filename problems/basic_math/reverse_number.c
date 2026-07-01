#include<stdio.h>
int main(){
  int a,b;
  printf("enter number\n");
  scanf("%d",&a);
  int rev=0;
  while(a>0){
    rev= (rev*10) + (a%10);
    a=a/10;

  };
  printf("%d\n",rev);
    
  }
