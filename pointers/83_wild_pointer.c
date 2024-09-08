#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    // unintialized pointer is wild pointer
    // printf("\n%d\n",*ptr);-->will give u error

    int *ptr2;
    int a=5;
    ptr2=&a;
    printf("a=%d\n",*ptr2);//-->ptr2 is not a wild pointer

    int *ptr3=(int *)malloc(sizeof(int));
    *ptr3=55;
    printf("*ptr3=%d\n",*ptr3);//-->ptr3 is not a wild pointer
    return 0;
}