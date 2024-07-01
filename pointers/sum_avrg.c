#include<stdio.h> 
int sum(int *a,int *b);
int avrg(int *c,int *d);
int main(){
    int a,b;
    a=9;b=9;
    printf("sum is %d\n",sum(&a,&b));
    printf("avrg is %d\n",avrg(&a,&b));

return 0;
}

int sum(int *ptr1,int *ptr2){
    return (*ptr1 + *ptr2);
}
int avrg(int *ptr1,int *ptr2){
    return ((sum(ptr1,ptr2)/2));
}