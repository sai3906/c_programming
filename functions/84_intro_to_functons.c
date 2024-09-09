#include<stdio.h>
void sub(){
    int a,b,sub=0;
    printf("\nenter two numbers\n");
    scanf("%d %d",&a,&b);
    sub=a-b;
    printf("difference=%d\n",sub);
}

void sum(){
    int a,b,sum=0;
    printf("\nenter two numbers\n");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("sum=%d\n",sum);
    //after this the memory allocated to this function will be free


    //we can call another function from this function
    sub();
}
int main(){
    sum();
    printf("hello\n");
    sum();
    //we can call a function multiple times
    return 0;
}