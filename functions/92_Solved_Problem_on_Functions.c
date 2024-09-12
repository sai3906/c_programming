#include<stdio.h>
int jumble(int x,int y){
    x=2*x +y;
    return x;
}

int main(){
    
    int x=2,y=5;
    y=jumble(y,x);
    x=jumble(y,x);
    printf("\n");
    printf("%d",x);
    printf("\n");
    return 0;
}