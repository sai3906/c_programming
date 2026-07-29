
/*
direct recursion:
a function calls itself is direct recursion
fun1(){
  ----
  ----
  fun1()
  ---
}


indirect recursion:
fun1(){
  ----
  fun2()
  ----
}
fun2(){
  ----
  fun3
  ----
}
fun3(){
  ----
  fun1()
  ----
}
*/

#include<stdio.h>
int fun1(int n);
int fun2(int n);
int main(){
  printf("%d \n",fun1(5));
}

int fun1(int n){
  if(n<=1) return 1;
  else{
    return n*fun2(n-1);
  }
}
int fun2(int n){
  if(n<=1) return 1;
  else{
    return n*fun1(n-1);
  }
}
/*
main function calls fun1
fun1(5) 120
5<=1 false
  else 
    5*fun2(4) 24
      4<=1 false
      else 4*fun1(3) 6
             3<=1 false
             else 3*fun2(2) 2
                    2<=1 false
                    else 2*fun1(1) 1
                           1<=1 true reurn 1
                              

*/  
