#include<stdio.h>
void main(){
        int i=0,a;
        printf("enter value\n");
        scanf("%d",&a);
        do{
                i++;
                a=a/10;
                if(a==0){
                        break;
                }

        }while(a>0);
        printf("digits:%d\n",i);

}
