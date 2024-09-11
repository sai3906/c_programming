#include<stdio.h>
void callbyvalue(int,int);
void callbyref(int*,int*);
//variable scope limited to its function
//after that these varbles memory will be vanished

void main(){
    //here x,y limited to main function
    //these x,y are not related to other functions
    int x=5,y=8;
    printf("in maain function  :x=%d y=%d\n",x,y);//x=5,y=8
    callbyvalue(x,y);
    printf("after call by value:x=%d y=%d\n",x,y);//x=5,y=8

    callbyref(&x,&y);
    printf("after call by ref  :x=%d y=%d\n",x,y);//x=8,y=5
}


void callbyvalue(int x,int y){
    //here x,y limited to call by value function
    //these x,y are not related to other functions
    x=8;
    y=5;
    printf("in call by value   :x=%d y=%d\n",x,y);//x=8,y=5
}


void callbyref(int *ptr1,int *ptr2){
    //here ptr1,ptr2 limited to call by ref function
    //these ptr1,ptr2 are not related to other functions
    //here we are receiving the address of x,y i.e &x,&y in pointers int *ptr1,int *ptr2 limited to this function
    //so these pointers are pointed to memory in main function 
    *ptr1=8;   //here we are indirectly changing the values stored in locations of x,y that are related to main fucntion
    *ptr2=5;
    printf("in call by ref     :x=%d y=%d\n",*ptr1,*ptr2);//x=8,y=5
}