#include<stdio.h>
void f(int *p,int m){
    m=m+5;
    *p=*p+m;
    return;
}
void main(){
    int i=5,j=10;
    f(&i,j);
    printf("\n%d\n",i+j);//-->30
}
//in main
//i=5 ,j=10
//let &i=124
//f(124,10)

//in f
//p=124
//*p=*124=5
//*p=i
//i=5 in main
//i=5 m=10
//m=m+5=15
//i=i+m=5+15=20

//in main
//i=20 j=10
//i+j=30