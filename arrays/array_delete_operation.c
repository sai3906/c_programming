#include<stdio.h>
int main(){
int a[5]={1,4,6,8,9},pos=4;
//for(int i=0;i<5;i++){
//    scanf("%d",&a[i]);
//}

//printf("array is\n");
for (int i=0;i<5;i++){
    printf("%d\t",a[i]);
}
printf("\n");

//printf("enter the poisition of array you want to delete considering 0th index as 1st position");
if(pos<1 || pos>5){
    printf("your postion is invalid\n");
}
else{
    for(int j=pos-1;j<4;j++){
            a[j]=a[j+1];
    }
}

//printf("array is\n");
for (int i=0;i<4;i++){
    printf("%d \t",a[i]);
}
printf("\n");
return 0;
}