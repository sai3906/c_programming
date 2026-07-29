/*
tail recursion:
  recursion is last thing 
*/
#include<stdio.h>
void prnt(int );
void main(){
  prnt(10);
}

void prnt(int a){
  if(a<1) return;
  else{
    printf("\n%d\n",a);
    prnt(a/2);
  }
}

/*


*/

