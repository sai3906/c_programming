#include<stdio.h>
int sum();//function declaration
//if we dont write anything in funcation argument,if we provide arguments it wont give any error
//it assumes default return type as int
//so it is better to write void in function declaration argument --> it wont take any arguments now-->which is good in one way


char letter();
//its better to declare a function globally


void main(){
    sum(8,9);//calling a function

    // char letter();//you can declare a function in main function before calling it


    char ch;
    ch=letter();
    printf("ch=%c\n",ch);
}


//defination of function
int sum(){
    float a,b,sum;
    printf("\nenter two numbers\n");
    scanf("%f %f",&a,&b);
    sum=a+b;
    printf("sum=%f\n",sum);



}

char letter(){
    char c;
    printf("enter a character\n");
    scanf(" %c", &c);
    return c;
}