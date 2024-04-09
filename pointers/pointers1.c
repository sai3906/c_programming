#include<stdio.h>
int main(){
    // a pointer is a variable that stores the address of a variable

    //& can be read as address of
    //* can be read as value at address

    //* can be used  to store the  address

    int a=23;

    //gere pointer is storing the address of a
    //it will have(will occupy) some address
    int *pointer=&a;

    printf("a =%d \n",a);
    printf("address of (a)=%p \n",&a);
    printf("value at(address of(a))=%d \n",*&a);

    printf("address using pointer=%p \n",pointer);
    printf("value at(pointer)=%d \n",*pointer);
}
