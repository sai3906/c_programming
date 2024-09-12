#include<stdio.h>
int sum(int,int,int);
int maximum(int,int,int);

void main(){
    printf("\nenter 3 numbers\n");
    int x,y,z,r;
    scanf("%d%d%d",&x,&y,&z);
    r=sum(x,y,z);
    printf("sum of three numbers=%d\n",r);

    //r is assigned so no problem since we alreader printed sum     
    r=maximum(x,y,z);
    printf("maximum is =%d\n",r);

}

int sum(int a,int b,int c){
    return a+b+c;
}

int maximum(int l,int m,int n){
    if((l>m)&&(l>n)){
        return l;}
    else if((m>l)&&(m>n)){
        return m;}
    else{
        return n;}

}