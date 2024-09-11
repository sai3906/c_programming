#include<stdio.h>

int sum(){
    int a=9,b=6;
    return a+b;
    //after return statement no line will be executed
}
int main(){
    int c;
    c=sum();
    printf("\n%d\n",c);
    return 0;
}