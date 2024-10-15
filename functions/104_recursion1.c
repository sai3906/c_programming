#include<stdio.h> 
void show(int p){
    if (p<1){
        return;
    }
    else{
        printf("%d\n",p);
        show(p-1);
        printf("\n%d",p);
    }
}
int main(){
    int n=2;
    show(n);
return 0;
}
/*
main function data frame
n=3
calls  show(3) function

show(3)
show function data frame
p=3
3<1 false
so in else condtion:
print 3
calls show(2) function

show(2)
show function data frame
p=2
2<1 false
in else condtion:
print 2
calls show(1) function

show(1)
show function data frame
p=1
1<1 false
in else condtion:
print 1
calls show(0) function 

show(0)
show function data frame
p=0
0<1 true
return to show(1) called function 
after that  print statement is there it prints 1


*/