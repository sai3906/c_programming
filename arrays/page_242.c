#include<stdio.h>
int main()
{
    int marks[6],index,sum;
    float average;
    for(index=0;index<6;index++){
        printf("enter %d subject marks",index+1);
        scanf("%d",&marks[index]);
    }
    sum=0;
    for(index=0;index<6;index++){
        sum +=marks[index];
    }
    average=sum/6;
    printf("aerage=%f",average);

}