#include<stdio.h>
int main(){
    int y,a=12;
    y=++a;
    //after = ++ is there.means it should increase first and assign later
    //i.e a=a+1 means a is modified to a=13
    //y=a means y=13
    printf("\na=%d\n",a);//-->a=13
    printf("y=%d\n",y);//-->y=13

    y=a++;
    //after = a is there.means it should assign first and increament later
    //i.e y=a means y=13
    //then a is modified as a=a+1 means a=14 
    printf("\na=%d\n",a);//-->a=14
    printf("y=%d\n",y);//-->y=13

    y=a--;
    //after = a is there.means it should assign first and decreament later
    //i.e y=a means y=14
    //a is modified as a=a-1 means a=13
    printf("\na=%d\n",a);//-->a=13
    printf("y=%d\n",y);//-->y=14

    y=--a;
    //after = a is there.means it should decreament first and assign later
    //a=a-1 means a is modified as a=12
    //then y=a means y=12
    printf("\na=%d\n",a);//-->a=12
    printf("y=%d\n",y);//-->y=12

    return 0;
}