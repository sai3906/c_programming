#include<stdio.h>
//method 1
struct student{
    int id;
    char gender;
    float weight;
};


//method 2
struct name{
    int id;
    char gender;
    float weight;
}kittu,bittu;



int main(){
    struct student ram,shyam;
    printf("\n%ld\n",sizeof(ram));
    printf("\n%ld\n",sizeof(kittu));
    return 0;
}