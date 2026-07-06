#include<stdio.h>
int main(){
  int a[]={1,2,3,4,5,6,7,8,9};
  int len=sizeof(a)/sizeof(a[0]);
  int b[len];
  for (int i=0;i<len;i++){
    printf("%d ",a[i]);
    }
  for(int j=0;j<len;j++){
    b[len-j-1]=a[j];
  }
  printf("\n");
  for (int i=0;i<len;i++){
    printf("%d ",b[i]);
    }
  printf("\n ");
}
