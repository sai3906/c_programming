#include<stdio.h>
int main(){
    int i=4,*j,**k;

    j=&i;
    k=&j;
    //here  in k we are storing address of j which is address of i
    //so we  need ** while declaring variables
    //*k will giveb you error as assignmnet from incomplete pointer  type
    printf("i address %u \n",&i);
    printf("i address %u \n",j);
    printf("i address %u \n \n",*k);

    printf("j address %u \n",&j);
    printf("j address %u \n\n",k);

    printf("k address %u \n\n",&k);

    printf("j value %u \n",j);
    printf("k value %u \n",k);
    printf("i address %d \n\n",i);

    printf("i value %u \n",*&i);
    printf("i value %u \n",*j);
    printf("i value %u \n",**k);
    return 0;

}