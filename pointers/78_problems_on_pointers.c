#include<stdio.h>
int main(){
    int a[]={10,11,71,56,67,5,4};
    int *p,*q;
    p=a;
    //let starting address of a is 200


    //a[]={-->10,11,-1,56,67,5,4};
    printf("\n*p=%d\n",*p);//-->10

    //right to left evalution

    //right one:
    //first p inreamented p+1=204 so *204=11
    //then p=204  

    //middle one: 
    //first assigned p=204 so *p=11
    //then p=p+1=208
    
    //left one:
    //first *p=71 *p=71
    //then *p+1=72
    printf("(*p)++=%d\t*p++=%d\t*++p=%d\n",(*p)++,*p++,*++p);

    q=p+3;
    //so q=208 + 3*(4)=220
    //*q=*220=5
    printf("*q-3=%d\n",*q-3);


    //p=p-1=204     *204=11
    //p=p=204
    printf("*--p=5=%d\n",*--p+5);

    //*p=*204=11 
    //*q=*220=5
    printf("*p+*q=%d\n",*p+*q);




    int b[]={10,11,-1,56,67,5,4};
    int *r,*s;
    r=b;
    s=&b[0]+3;
    printf("\n\n");
    printf("%d  %d  %d\n",(*r)++,(*r)++,*(++r));
    printf("%d\n",*r);
    printf("%d\n",(*r)++);
    printf("%d\n\n",(*r)++);
    s--;
    printf("%d\n",(*(s+2))--);
    printf("%d\n",*(r+2)-2);
    printf("%d\n",*(r++ -2)-1);



    return 0;
}