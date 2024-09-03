#include<stdio.h>
int main(){
    int a[]={10,23,5,77,8,96};
    //supose address of 10 is 100
    int *p=a;
    printf("\np=%p\n",p);//-->100

//____________________________________________________________________
    //p++ means first assigned/returned p=p and then p=p+1
    //so here it prints 100 since p=p
    printf("\np++=%p\n",p++);//-->100

    //here p is modified or p=p+1 so it prints next address
    printf("p  =%p\n",p);//-->104
//_________________________________________________________________________________
    //so now p is at 104

    //here it first assigns p=p
    //so *p=*104=23
    printf("\n*p++ =%d\n",*p++);//-->23

    //and next p=p+1
    printf("p   =%p\n",p);//-->108
//___________________________________________________________________________
    //so now p is at 108
    
    //it will first increment p=p+1
    //so p is at 112
    //*(p+1) gives 77
    printf("\n*++p    =%d\n",*++p);//-->77

    //next p=p
    printf("p   =%p\n",p);//-->112

//___________________________________________________________________________________
    //so p is at 112

    //it evaluates from right to left
    //first right side *p++ prints *112=77
    //and then moves pointer to 116
    //left side *116=8
    //and moves pointer to 120
    printf("\n*p++ =%d \t *p++ =%d  \n",*p++,*p++);


    printf("p   =%p\n",p);//-->120
    printf("*p   =%d\n",*p);//-->96
//-----------------------------------------------------------------------
printf("_____________________________________________________________\n");
//-----------------------------------------------------------------------
//a[]={10,23,5,77,8,-->96};
//p is at 120
//first it gives *120=96
printf("*p--=%d\n",*p--);//-->96
//and then move to 116
//a[]={10,23,5,77,-->8,96};
printf("*p=%d\n",*p);//-->
//_______________________________________________________________
//a[]={10,23,5,77,-->8,96};
//it evaluates from right to left

//first right most one evaluted
//it decreses first p=p-1 a[]={10,23,5,-->77,8,96}; *p=77
//and assign to p=p   a[]={10,23,5,-->77,8,96};

//then t middle one evaluted
//it decreses first p=p-1 a[]={10,23,-->5,77,8,96}; *p=5
//and assign to p=p   a[]={10,23,-->5,77,8,96}; 

//then left most one evaluted
//it decreses first p=p-1 a[]={10,-->23,5,77,8,96}; *p=23
//and assign to p=p   a[]={10,-->23,5,77,8,96};
printf("\n*--p=%d\t *--p=%d\t *--p=%d  \n",*--p,*--p,*--p);//-->23,5,77
printf("*p=%d\n",*p);//-->23



//a[]={10,-->23,5,77,8,96};
//it is at 104 so *104=23
//--23 first decreses becomes 22
//and modify value to 22
printf("\n--(*p)=%d\n",--(*p));//
printf("*p=%d\n",(*p));

//a[]={10,-->22,5,77,8,96};
//it first assigns 22
//and then modify to 23
printf("\n(*p)++=%d\n",(*p)++);//-->22
printf("*p=%d\n",(*p));//-->23


return 0;
}