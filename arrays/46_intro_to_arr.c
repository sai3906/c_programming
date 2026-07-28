#include<stdio.h>
void main(){
  /*
  int b
  here "b" can only store one number
  if want to store 100 numbers no need to declare 100 integer variables
  
  int b[100];
  under a single varible name, array can store same datatype multiple values in a continous memory
  here "b" can store 100 integer values using the same name

  datatype name[size in +ve int]
  int b[-6]  => not valid
  int b[3+3] => valid
  int b[ ]   => not valid
  */
  int a=6;
  int s[a]; //s can store 6 integer values
  printf("\nsize=%ld bytes\n",sizeof(a));
  printf("size=%ld bytes\n",sizeof(s));
  
  int y[11/2];  //since 11/2 is 5 ,it works
  printf("size=%ld bytes\n",sizeof(y));

  int z[0]; //it also working
  z[0]=9;
  printf("size=%ld bytes\n",sizeof(z));
  printf("z[0]=%d \n",z[0]);

}
