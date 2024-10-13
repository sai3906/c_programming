#include<stdio.h>
int sum(int,int);
int main(){
    int a=5,b=8,c;
    // int (*ptr)(int,int)=&sum;
    int (*ptr)(int,int)=sum;    //name of the function stores base address and it depends on the prototype of the function
    // c=(*ptr)(a,b);  //de referencing or calling funtion using pinter
    c=ptr(a,b);  //this also works same above line
    printf("\na+b=%d\n",c);//-->13
    return 0;
}
int sum(int x,int y){
    return x+y;
}

/*
syntax:
function return type (*pointer name)(arguments data type);
*/