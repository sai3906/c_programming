#include<stdio.h> 

int main(){
int arr[5]={2,41,6,13,19};
int max=arr[0];
int second_max=arr[0];
for(int i=0;i<5;i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
printf("\nMax is %d\n",max);

for(int i=0;i<5;i++){
    if(arr[i]>arr[0]  && arr[i]<max){
        second_max=arr[i];}
    }
printf("\nSecond Max is %d\n",second_max);
return 0;
}
