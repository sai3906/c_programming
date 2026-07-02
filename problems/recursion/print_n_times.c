include<stdio.h>
void copy_i(int);
int main(){
  int a;
  printf("enter how many time\n");
  scanf("%d",&a);
  copy_i(a);
  return 0;
}
void copy_i(int a){
  printf("%d: sai\n",a);
  if(a==1){
    //printf("final call\n");
    return;
  }
  else{
    a--;
    //printf("calling function %d \n",a);
    copy_i(a);
  }
}
