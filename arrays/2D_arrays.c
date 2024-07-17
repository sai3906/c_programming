#include<stdio.h>
int main(){
    //array initialization
    int a[2][3]={1,2,3,4,5,6};
    int b[2][3]={{1,2,3},{4,5,6}};
    
    //this is legal
    int c[][3]={8,5,6,4,9,0};

    //this will give compilation error
    // int d[2][]={3,67,2,6,78,9};


    //
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            //printf("%d\t",c[i][j]);
        }
    //    printf("\n");
    }

    printf("%d\n",c[1][1]);
}