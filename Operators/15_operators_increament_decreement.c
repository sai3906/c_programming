#include<stdio.h>
int main(){
    int y,a=12;
    y=++a;
    //after = ++ is there.means it should increase first and assign later
    //i.e a=a+1
    //y=a
    printf("\na=%d\n",a);
    printf("y=%d\n",y);

    y=a++;
    //after = a is there.means it should assign first and increament later
    //i.e y=a
    //a=a+1
    printf("\na=%d\n",a);
    printf("y=%d\n",y);

    y=a--;
    //after = a is there.means it should assign first and decreament later
    //i.e y=a
    //a=a-1
    printf("\na=%d\n",a);
    printf("y=%d\n",y);

    y=--a;
    //after = a is there.means it should decreament first and assign later
    //i.e y=a
    //a=a-1
    printf("\na=%d\n",a);
    printf("y=%d\n",y);

    return 0;
}
