#include<stdio.h>
int fiban(int ,int,int,int);
int main(){
  printf("enter what term\n");
  int n;
  scanf("%d",&n);
  fiban(0,1,n,0);
}
int fiban(int term1,int term2,int n,int i){
  printf("%d ",term1);
  int term3=term2 + term1;
  if(i<n){
    fiban(term2,term3,n,i+1);
    }

}
