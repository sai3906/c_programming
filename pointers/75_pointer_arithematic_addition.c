#include<stdio.h>
int main(){
    int a=21;
    int *p=&a;

    //*__addition__*//
    //int *q=&a;
    //we cannot do p+q
    printf("\np=%p\n",p);
    printf("p+1=%p\n",p+1);
    printf("p+2=%p\n",p+2);
    printf("p+3=%p\n",p+3);
    // p+k= address stored in p + k*(size of piinter p data type)
    //int takes 4 bytes

    int arr[5]={7,1,-1,10,11};
    printf("\narr=%p\n",arr);
    //arr is itself  is a pointer to first elementor base element of array which we call it as internal pointer
    //we cannot do arithematic addition to arr like arr+1 arr+2 ,Hence it is called as constant pointer


    int *ptr=&arr[0];       //we can do *ptr=&arr; both are same

    for(int m=0;m<5;m++){
        printf("ptr+%d=%p \t *(ptr+%d)=%d\n",m,ptr+m,m,*(ptr+m));
    }


    return 0;
}