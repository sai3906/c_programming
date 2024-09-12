#include<stdio.h>
void sum(float,float);

void main(){
    float a,b;
    printf("\nenter two values\n");
    scanf("%f %f",&a,&b);
    sum(a,b);
    //a and b local to main
}

void sum(float m,float n){
    printf("\nsum=%f\n",m+n);
    //a,b copied to m,n.
    //m,n are local to sum funtion
    
}