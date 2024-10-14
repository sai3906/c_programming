#include<stdio.h>
void add(int a,int b){printf("%d\n",a+b);};
void sub(int a,int b){printf("%d\n",a-b);};
void mul(int a,int b){printf("%d\n",a*b);};
void div(int a,int b){printf("%d\n",a/b);};
int main(){
    int sel,a=8,b=2;
    printf("\nenter operation from 0 to 3\n");
    scanf("%d",&sel);

    void (*fptr[4])(int,int)={add,sub,mul,div};//declaration of array of pointers
    //fptr is a array that stores the addresses of add,sub,mul,div with indexing 0,1,2,3 respectively
    (*fptr[sel])(a,b);//calling functions
    return 0;
}