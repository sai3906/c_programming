#include<stdio.h>
int main(){
    int gopi,rani;
    int *ptr1,*ptr2,*ptr3;
    gopi=10;
    rani=11;
    ptr1=&gopi;
    ptr2=ptr1; //storing the address of ptr1 in ptr2,so ptr2 also points to gopi
    printf("\n ptr1=%p\n &gopi=%p\n ptr2=%p\n",ptr1,&gopi,ptr2);
 
    printf("\n gopi=%d\n *ptr1=%d\n ptr2=%d\n",gopi,*ptr1,*ptr2);

    printf("\nrani=%d\n",rani);

    ptr3=&rani;
    *ptr3=*ptr2; //value at address of ptr3 is replaces by value at address of ptr2
    printf("\nrani=%d\n",rani);

    return 0;
}