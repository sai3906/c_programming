#include<stdio.h>
int arm(int);;
int num_of_digits(int);
int power_of_digit(int ,int);
int main(){
  int a,b;
  printf("enter a number\n");
  scanf("%d",&a);
  b=arm(a);
  if(b==a)printf("armstrong\n");
  else printf("its not\n");
}
int arm(int a){
  int b,c,s=0,rem;
  b=num_of_digits(a);
  c=power_of_digit(a,b);
  while(a>0){
    rem=a%10;
    s=s+power_of_digit(rem,b);
    a=a/10;
  }
  return s;
}
int num_of_digits(int a){
  int i=0;
  while(a>0){
    i++;
    a=a/10;
  }
  return i;
}
int power_of_digit(int a,int itr){
  int mul=1; 
  while(itr>0){
    mul=mul*a;
    itr--;
  }
  return mul;
}
