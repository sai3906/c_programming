#include<stdio.h>
void main(){
  int arr[]={13,46,24,52,20,9};
  int len = sizeof(arr)/sizeof(arr[0]);
  int i,temp,min;
  for(int i=0;i<len;i++){
    printf("%d ",arr[i]);
  } 
  printf("\n");
  for(i=0;i<len;i++){
    min=arr[i];             //assume this is min 
    for(int j=i;j<len;j++){
      if(arr[j]<min){       //compare every element with this min
        min=arr[j];         //found out new men
        temp=arr[i];        //swap this cuurent element with min 
        arr[i]=arr[j];
        arr[j]=temp;

      }

    }
  }
  for(int i=0;i<len;i++){
    printf("%d ",arr[i]);
  } 
  printf("\n");
}
