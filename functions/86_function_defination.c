#include<stdio.h>
int sum(int m ,int n);
//datatype( datatypes are enough);
//it is not necessary mention m,n
//it is not necessary to same as i,j

int main(){
    int a=8,b=6,c;
    c=sum(a,b);
    printf("c=%d\n",c);
    return 0;
}
//data type(arguments with data type)
int sum(int i,int j){
    return i+j;
}