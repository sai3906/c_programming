#include<stdio.h>
int main(){
  int a[]={1,2,2,2};
  int len=sizeof(a)/sizeof(a[0]);
  int b[len],same=1,uniq=1;
  for(int i=0;i<len-1;i++){
    if(a[i]!=a[i+1]){
      uniq++;
    }
    if(a[i]==a[i+1]){
      same++; 
    }
    printf("\nsame=%d uniq=%d\n",same,uniq);
  }
  for(int i=0;i<len;i++){
    //printf("%d ",b[i]);
  }
}
