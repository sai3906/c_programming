#include<stdio.h> 

int main(){
int a[5]={1,2,3,4,5},count=0;
int len=sizeof(a)/sizeof(a[0]);
for(int i=0;i<len;i++){
    if(a[i]<a[i+1]){count++;}
    // printf("%d\t",a[i]);
}
if(count==len){printf("\nsorted\n");}
else{printf("not sorted\n");}
return 0;
}