#include<stdio.h>
void main(){
	int a,x=2;
	int i=2;
	printf("enter value\n");
	scanf("%d",&a);
	for(;a>i;i++){
		if(a%i ==0){printf("bcz of %d\n",i);x=1;break;}
	}
	if(x==1)printf("not prime\n");
	else if(x==2)printf("prime\n");
	

	
}


