#include<stdio.h>
float average(int [],int);
//in declaration no need to mention names 
void main(){
    int a[]={1,2,4,3,5};
    int sz;
    sz=sizeof(a)/sizeof(a[0]);

    float avrg;
    avrg=average(a,sz);
    printf("\n%f\n",avrg);//>

    printf("size of array in main is %ld bytes\n",sizeof(a));
}

float average(int b[],int p){
    int s;
    float avg;
    for(int i=0;i<p;i++){
        s=s+b[i];
    }
    avg=s/p;
    printf("size of array in average is %ld bytes\n",sizeof(b));//-->8
    return avg;
}

//warning: ‘sizeof’ on array function parameter ‘b’ will return size of ‘int *
// in 64bit architecture int * size is 8 
//a itself is internal pointer varible to first element of a[0]
//so it is call by ref
//means b treated as pointer i.e int *b to the first element of considering a[0] as single element
