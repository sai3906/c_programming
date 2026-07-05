#include<stdio.h>
int sum_of_n(int,int);
int main(int){
  int a;
  printf("enter a\n");
  scanf("%d",&a);
  int s=sum_of_n(a,0);
  printf("sum=%d\n",s);
}
int sum_of_n(int a,int sum){
  if (a>0){
    sum=sum+a;
    sum_of_n(a-1,sum);
   }
   else return sum;
  
} 
