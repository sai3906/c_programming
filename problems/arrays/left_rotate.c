#include<stdio.h>
void main(){
  int arr[]={1,2,3,4,5,6,7};
  int len=sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<len;i++){
    printf("%d ",arr[i]);
  }
  int arr_n[len];
  for(int i=0;i<len;i++){
    arr_n[i]=arr[i+1];
  }
  arr_n[len-1]=arr[0];
  printf("\n");
  for(int i=0;i<len;i++){
    printf("%d ",arr_n[i]);
  }
  printf("\n");
}
