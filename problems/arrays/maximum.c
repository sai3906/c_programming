#include<stdio.h>
int maximum(int [],int);
int main(){
  int a[]={2,5,1,3,0};
  int max;
  int len=sizeof(a)/sizeof(a[0]);
  max=maximum(a,len);
  printf("max:%d\n",max);
}
int maximum(int a[],int len){
  int max=a[0];
  for(int i=0;i<len;i++){
    if(max<a[i])max=a[i];
  }
  return max;
}

