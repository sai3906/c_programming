#include<stdio.h> 

int main(){
int marks[4];
for(int i=0;i<4;i++ ){
    printf("enter %d element \n",i+1);
    scanf(" %d",&marks[i]);
}
printf("\n");
for(int j=0;j<4;j++ ){
    printf(" %d \t",marks[j]);
}
return 0;
}