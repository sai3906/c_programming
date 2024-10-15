#include<stdio.h>
    struct student{
    int id;
    char gender;
    float weight;
    };

int main(){

/*DECLARATION*/
    //method 1
    struct student ram={11,'M',34};
    struct student shyam={12};
    /*
    Note:
    struct student ram={11};
    defaulty remaining variable gender, weight takes null 
    */

    //method 2
    struct name{
        int id;
        char gender;
        float weight;
    }kittu={13,'F',45.8};

    //method 3
    struct name bittu=kittu;
    /*
    every member will be copied to kittu
    since memebers datatypes are same this copy operarion works
    */

    //method 4
    struct student naag;
    naag.id=14;
    naag.gender='M';
    naag.weight=34.5;


/*ACCESSING*/
    printf("\n%d\n",ram.id);//-->11
    printf("%c\n",kittu.gender);//-->F
    printf("%f\n",shyam.weight);//-->0.00000
    printf("%f\n",bittu.weight);//-->45.8
    printf("%d\n",naag.id);//-->

    return 0;
}