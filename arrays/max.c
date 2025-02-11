#include<stdio.h> 

int main(){
int arr[5]={2,4,6,3,11};
int max=arr[0];
for(int j=0;j<5;j++){
    if(arr[j]>max){
        max=arr[j];
    }
}
printf("\nMax is %d\n",max);
return 0;
}