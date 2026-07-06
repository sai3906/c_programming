#include<stdio.h>
int arr_rev(int a[],int );
int main(){
  int a[]={0,1,2,3,4,5,6};
  /*
  int a[] = int *a
  this pointer points to a[0] 
  */
  int len = sizeof(a)/sizeof(a[1]);
  arr_rev(a,len);
}


int arr_rev(int *b,int len){
  printf("in rev fun\n");
  printf("len of b=%d\n",len);
  for(int i=0;i<len;i++){
    printf("%d ",*(b+i));
  }
  printf("\n");
  int k;
  int j=0;
  int rev[len];
  int rev1[len];
  while(j<len){
    rev[len-j-1]=b[j];
    j++;
    //printf("%d ",rev[len-1]);
  }

  printf("\n");

//  arr_rev(&rev1[len-k-1],len);


  for(int i=0;i<len;i++){
    printf("%d ",rev[i]);
  }
  printf("\n");
}
