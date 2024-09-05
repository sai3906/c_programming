#include<stdio.h>
int main(){
    int a=10;
    void *p;

    //void pointer can store any data type
    //we dont need to use many data type pinters
    //malloc and calloc functions return void poiters

    p=&a;
    printf("\n%d\n",*(int *)p);
    //*p dont know how many bytes to acces
    //so do typecasting/converting to int by (int *)
    //so here p knows access 4bytes of int
    
    float b=24.5;
    p=&b;
    printf("%f\n",*(float *)p);

    char ch='a';
    p=&ch;
    printf("%c\n",*(char *)p);

    return 0;
}