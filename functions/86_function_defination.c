#include<stdio.h>
int sum(int m ,int n);
//datatype( datatypes are enough);
//it is not necessary mention m,n
//here m,n are not necessary same as i,j names
//here m,n and i,j are called as formal parameters

int main(){
    int a=8,b=6,c;
    c=sum(a,b);
    //here a,b are called as actual parameters
    printf("c=%d\n",c);
    return 0;
}
//data type(arguments with data type)
int sum(int i,int j){
    return i+j;
}