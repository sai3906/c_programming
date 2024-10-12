#include<stdio.h>

char * kalki(){
//it will return a pointer to first letter of string

    char str[]="saikiran";          //-->this will be stored in stack,so it will vanish after this scope
    static char str1[]="saikiran1";  //to make this available to entire program make it static,then it will work
    char * str2 ="saikiran2";       //to not to store str2 in stack memory,this will be stored in heap memory
    
    return str;
    // return "adidas";
}
int main(){
    char *bujji; 
    bujji=kalki();
    printf("\n%s\n",bujji);

    bujji[0]='R';      //this will only work for str1 since  it is not considered as string so we can modify
    printf("\n%s\n",bujji);

    return 0;
}
//__seperate memory for strings__
//it is similar to static memory i.e after its scope it wont vanish
//strings are stored in this sepearate read only memory 
//read only memory,**we cannot modify the string** in main,
//e.g: "adidas"

//__stack memory__
//after its completed its scope,it will vanish
//by deafulat any variable will store in stack
//so we cannot modify these in main since it vanished
//e.g: str

//__static  and global variables__
//these vaiables are available to all functions through out the program
//can be modified in main
//e.g: str1

//__heap memory__
//they dont vanish after its scope
//pointer variables store in this
//when the memory is allocatted dynamincally i.e calloc,malloc
//read only memory ,so cannnot be modified in main
//e.g: str2

