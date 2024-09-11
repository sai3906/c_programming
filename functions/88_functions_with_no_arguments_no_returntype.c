#include<stdio.h>

//without declaring we can directly define function before main function
// if we dont write return type as void it assumes return type as int
//better to mention return type as void if we are not returning anything
void road(void){
    printf("\nin road\n ");
}

void main(){
    road();
}
