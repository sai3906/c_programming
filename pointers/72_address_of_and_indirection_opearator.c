#include<stdio.h>
int main(){
    int a=10,b=9;
    int c;
    int *p,*q;
    p=&a; //p stores the address of a whose variable is int
    q=&b;
    c=*p;


    printf("\n&a=%p",&a);
    printf("\np=%p\n\n",p);

    printf("&b=%p\n",&b);
    printf("q=%p\n\n",q);


    printf("&p=%p\n",&p);

    //indirectly printing a value
    //*p can be read as value at address stored in p
    printf("*p=%d\n",*p);
    printf("c=%d\n",c); //in c stores value at address stored in p
    
    *p=20;
    printf("a=%d\n",a);
    printf("p=%p\n",p);

    
    return 0;
}
