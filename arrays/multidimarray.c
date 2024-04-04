#include<stdio.h>
int main(){
    int i,j, a[3][3]={{1,2,3},{9,8,7},{4,8,6}};

    for(i=0;i<3;i++)
    {   
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
