#include<stdio.h>
int main(){
    int a[]={12,4,78,2,77};
    int *p=&a[0];
    int *q=&a[4];

    printf("\np=%p\n",p);
    printf("p=%p\n\n",q);

    for(int m=0;m<5;m++){
        printf("a[%d] address is %p\n",m,&a[m]);
    }

    //we can do p-q and q-p which is not possible with p+q
    //p-q gives (address of p - address of q)/one element data size
    //simly p-q gives we can say how manyth element q is from p
    //eg. if p stores 100 q stores 116 then the p-q gives(100-116)/4=-4
    printf("\np-q=%ld\n",p-q);
    printf("q-p=%ld\n",q-p);
    
    *q=25;
    printf("\np-q=%ld\n",q-p);

    *p=27;
    q=q-3;
    p=p+3;
    printf("\np-q=%ld\n",p-q);
    return 0;
}