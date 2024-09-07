#include<stdio.h>
#include<stdlib.h>
int *fun(){
    int a=23;
    return &a;
}
int main(){
    //dangling means leaving something freely
    //danglning pointer points to a vanished/no data location which has address but not data in it
    //this occurs usually when we point to a variable that is out of scope
    //a varible after its scope will vanish its value

    //(1)
    int *ptr = (int *)malloc(sizeof(int));
    //malloc function will return void pointer ,so by using (int *) we are converting it into int pointer
    //here we dynammically  allocated int size  memory pointed by ptr
    *ptr=10;
    printf("\nptr=%d\n",*ptr);

    free(ptr);
    //here we erasing the data that stored in memory pointed by ptr
    //but ptr is pointing to same memory location
    //so this is called as dangling pointer
    //so some garbage value will be printed 
    printf("ptr=%d\n",*ptr);
    //so redirect this poointer to NULL location
    ptr=NULL;
    //we cannot dereference NULL pointer 
    //so check the NULL pointer before dereferncing it

    //(2)
    int *ptr2=fun();
    printf("ptr=%d\n",*ptr2);//-->gives error
    //here ptr2 is dangling pointer since variable a scope is limited to fun function
    //after fun function it a will be free
    //but still ptr2 is pointing to returned address of fun function

    //(3)
    int *ptr3;
    {
        int b=5;
        ptr3=&b;
        printf("*ptr3=%d\n",*ptr3);
    }

    printf("ptr3=%d\n",*ptr3);//-->here it may give 5 but not always


    return 0;
}