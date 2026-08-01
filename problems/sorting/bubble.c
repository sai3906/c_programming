#include<stdio.h>
void main(){
	int arr[]={13,46,24,52,20,9};
//	int arr[]={5,4,3,2,1};
	int len=sizeof(arr)/sizeof(arr[0]);
	int temp,i,j;
	for(i=0;i<len;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	for(i=0;i<len;i++){
		for(j=0;j<len-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<len;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
