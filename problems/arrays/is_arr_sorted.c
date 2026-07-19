#include<stdio.h>
int main(){
  int a[]={5,4,6,7,8};
  int j;
  int len=sizeof(a)/sizeof(a[0]);
  for(int i=0;i<len-1;i++){
    if(a[i]>a[i+1]){
      j=1;break;
    }
    else if(a[i]<a[i+1]){
      j=0;
    }
  }
  if(j==1)printf("\nnot sorted\n");
  if(j==0)printf("\nsorted\n");
}
