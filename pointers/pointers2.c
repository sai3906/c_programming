#include<stdio.h>
int main(){
    int i=4,*j,**k;

    j=&i;
    k=&j;
    //here  in k we are storing address of j which is address of i
    //so we  need ** while declaring variables
    //*k will giveb you error as assignmnet from incomplete pointer  type
    printf("i address %p \n",&i);
    printf("i address %p \n",j);
    printf("i address %p \n \n",*k);

    printf("j address %p \n",&j);
    printf("j address %p \n\n",k);

    printf("k address %p \n\n",&k);

    printf("j value %p \n",j);
    printf("k value %p \n",k);
    printf("i address %d \n\n",i);

    printf("i value %d \n",*&i);
    printf("i value %d \n",*j);
    printf("i value %d \n",**k);
    return 0;

}
