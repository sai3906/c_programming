#include<stdio.h> 
int call_ref(int *a);

int main(){
int a,b;
a=8;
printf("main fun %u\n",&a);
b=call_ref(&a);


printf("b=%d\n",b);
return 0;
}
int call_ref(int *ptr){
    printf("in fun %u\n",ptr);
    return 10*(*ptr);
}