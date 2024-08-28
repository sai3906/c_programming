#include<stdio.h>
int main(){
    int a=10;
    int * p=&a;
    int * * q=&p;
    int ***r=&q;

    printf("\na=%d\n",a);
    printf("a=%d\n",*p);
    printf("a=%d\n\n",**q);
    
    printf("address of q=%p\n",&q);
    printf("address of q=%p\n\n",r);


    printf("address of p=%p\n",&p);
    printf("address of p=%p\n\n",q);


    *p=19;
    printf("\na=%d\n",a);

    **q=45;
    printf("\na=%d\n\n",a);


    return 0;
}