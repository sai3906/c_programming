#include<stdio.h>
int main(){
  int a[]={1,2,7,4,4,5};
  int len=sizeof(a)/sizeof(a[0]);
  
  for(int i=0;i<len;i++){
    printf("%d ",a[i]);
  }
  
  int max=a[0];
  for(int i=0;i<len;i++){
    if(max<a[i])max=a[i];
  }
  printf("\n");
  
  int diff[len];
  for(int i=0;i<len;i++){
    diff[i]=max-a[i];
  }
  printf("\n");
  
  int min=diff[0];
  int min_idx;
  for(int i=0;i<len;i++){
    if(diff[i] !=0 && min>diff[i]){
      min=diff[i];
      min_idx=i;
    }
  }
  printf("second large %d\n",a[min_idx]);

}
