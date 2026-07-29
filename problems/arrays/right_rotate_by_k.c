#include<stdio.h>
void main(){
  int arr[]={1,2,3,4,5};
  int len=sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<len;i++){
    printf("%d ",arr[i]);
  }
  int arr_temp[len];
  int k;
  printf("\nenter k\n");
  scanf("%d",&k);
  for(int i=0;i<len;i++){
    arr_temp[i+k]=arr[i];
  }
  //arr_temp[0]=arr[len-1];
  for(int i=0;i<k;i++){
    arr_temp[i]=arr[len-k+i];
  }
  printf("\n");
  for(int i=0;i<len;i++){
    printf("%d ",arr_temp[i]);
  }
  printf("\n");
}
