#include<stdio.h>
void main(){
  int a,rev=0;
  printf("enter number\n");
  scanf("%d",&a);
  int b=a;
  while(a>0){
    rev=rev*10 + a%10;
    a=a/10;
  }
  if(b==rev)printf("yes,palindrome\n");
  else if(b!=rev)printf("no,its not\n");
}
