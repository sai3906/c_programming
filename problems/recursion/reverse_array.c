#include<stdio.h>
int arr_rev(int a[],int,int );
int main(){
  int a[]={10,20,30,40,50};
  int len = sizeof(a)/sizeof(a[1]);
  printf("\na=%p len=%d\n",a,len);
//  printf("%d ",*a);
//  printf("%d ",*a+1);
//  printf("%d\n",*(a+1));
//  arr_rev(a,len,0);
}

int arr_rev(int *b,int len,int i){
//  for(int k=0;k<len;k++){
//    printf("%d ",b[len-1-k]);
//  }
  printf("\n");
  int rev[len];
  rev[0]=*(b+len-1);
  printf("%d ",*rev);
  
  rev[1]=*(b+len-2);
  printf("%d ",*(rev+1));
  
  rev[2]=*(b+len-3);
  printf("%d ",*(rev+2));
  printf("\n");
  printf("\n");

//  if((len-i)>0){
//    printf("%d ",*(rev+i));
//    arr_rev(rev+len-i,len,i+1); 
//  }
//  for(int k=0;k<len;k++){
//    printf("%d ",rev[k]);
//  }
  printf("\n");
}

/*
  int a[] = int *a
  this pointer points to a[0] 
*/
