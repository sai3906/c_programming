#include<stdio.h>
int gcd_of_two(int, int);
int min_of_two(int, int);
int main(){
  int a,b;
  printf("enter two numbers\n");
  scanf("%d %d",&a,&b);
  int c;
  c = gcd_of_two(a,b);
  printf("gcd is %d\n",c);
  return 0;
}

int gcd_of_two(int a,int b){
  int p;
  p=min_of_two(a,b);
  while(p>0){
    if(a%p==0 && b%p==0){return p;break;};
    p--;
  }
  
}
int min_of_two(int m, int n){
  if(m<n) return m;
  else return n;
  }
  
