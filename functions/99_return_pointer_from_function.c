#include<stdio.h>
int* baalu(int []); 
int main(){
    int page[]={5,7,2,6};
    int *imp;
    imp=baalu(page);
    printf("%d\n",*imp);
    return 0;
}
int *baalu(int bat[]){
    printf("\n%d\n",*bat);
    bat=bat+2;
    return bat;
}