#include<stdio.h> 

int main(){
int a=4;
int *ptr=&a;



char f='y';
char *g=&f;

printf("value of ptr %ls \n",ptr);
ptr=ptr+1;
//adds int size of 4 bytes to ptr since ptr=ptr+1;
printf("value of ptr %ls \n",ptr);

printf("\n");

printf("value of ptr %s \n",g);
g=g+1;
//adds char size of 1 byte to g since g=g+1;
printf("value of ptr %s \n",g);


return 0;
}
