#include<stdio.h>
void main(){
  int arr[]={5,4,3,2,1};
  int len=sizeof(arr)/sizeof(arr[0]);
  int i;
  for(i=0;i<len;i++){
    printf("%d ",arr[i]);
  }
  printf("\nenter the search element\n");
  int k;
  scanf("%d",&k);
  for(i=0;i<len;i++){
    if(arr[i]==k)break;
  }
  printf("found at %d \n",i);
}
