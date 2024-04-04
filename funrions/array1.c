#include<stdio.h>
int main(){
    int i, a[]={12,43,6,22,2};
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(a[0]));
    //here sizeof(a) means total size of array a in bytes assuming each element having 4 bytes each
    //therefore sizeof(a)=20 here

    //we cant access total elements as in python
    //we need to use for loop to access elements
    for(i=0;i<sizeof(a)/sizeof(a[0]);i++){
        printf("a[%d]=%d\t",i,a[i]);
    }

}