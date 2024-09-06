#include<stdio.h>
int main(){
    int *p=NULL;
    //if we are not initialized a pointer it will point to a random location
    //accessing this random location will raise error

    //so instead of without initialization its better to initialize it to a NULL=nil=0 location which is already defined
    //this zeroth location address have undefined obejct which is cannot be dereferenced
    //but accessing this NULL=0=nil location value will raise error
    //so dont try to access this NULL pointer
    //NULL itself is a pointer
    //it is used for error handling

    int *q;
    int *r=NULL;
    printf("\np=%p\n",p);//-->(nil)
    printf("\nq=%p\n",q);//-->random address location
    if(p==NULL){
        printf("this is null pointer\n");}//-->this will execute
    else{
        printf("%d\n",*p);}

    if(r==p){
        printf("both pointing to NULL location\n");}//-->this will execute
    else{
        printf("%d\n",*r);}


    int *s=0;
    if(p==s){
        printf("NULL or 0 are same location\n");}//-->this will execute
    else{
        printf("%d\n",*r);}

    return 0;
}