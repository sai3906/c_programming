#include<stdio.h>
void main(){
  int arr[]={1,2,3,4,5,6,7};
  int len=sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<len;i++){
    printf("%d ",arr[i]);
  }
  int arr_n[len];
  int k;
  printf("\nenter k\n");
  scanf("%d",&k);
  for(int i=0;i<len;i++){
    arr_n[i]=arr[i+k];
  }
  for(int i=0;i<k+1;i++){
    arr_n[len-k+i]=arr[i];
  }
  printf("\n");
  for(int i=0;i<len;i++){
    printf("%d ",arr_n[i]);
  }
  printf("\n");
}
