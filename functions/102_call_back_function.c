#include<stdio.h>
int sum(int p,int q){
    return p+q;
}
int mul(int j,int k){
    return j*k;
}
void japan(int (*wyra)(int,int)){  //wyra funtion pointer stores the address of sum or mul address 
    printf("\nin japan\n");
    int a;
    a=(*wyra)(2,3);    //dereferencing the address 
    //a=wyra(2,3); same as above
    printf("%d\n",a);
}
void main(){
        
    japan(sum);    //passing sum function address to japan function
    //japan(&sum); same as above 
    japan(mul);    //passing mul function address to japan function
    //japan(&mul); same as above
}

/*
call back function:= a function is given as argument  to another function

*/