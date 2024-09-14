//find length of name1 and make v to V
#include<stdio.h>
void show(char [],char *);
//above both are same 

int main(){
    char name1[]="saikiran";

    char name2[] ="vallamkonda";
    
    show(name1,name2);
    return 0;
}
void show(char peru[],char *naam ){
    //what compiler will do
    //char * peru;
    //i.e peru will point to the address of first character i.e s in main function
    //same naam willppoint to the address of forst character i.e v in main function


    int a;
    a=printf("\n%s\n",peru);
    //printf  returns the length
    printf("length of name1=%d\n",a-2);
    //-2 is to exlude 2 quatations

    int l=0;
    for(int j=0;peru[j]!='\0';j++){
        l=l+1;
    }
    printf("length of name1..=%d\n",l);

    naam[0]='V';
    printf("changed one:\t%s\n",naam);
    
}