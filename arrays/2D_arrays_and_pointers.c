#include<stdio.h>
int main(){
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    //view it as a {1st row a[0]as an array ,2nd row a[1]as an array, 3rd row a[2]as an array}
    //a[0]={1,2,3} is a array
    //a[1]={4,5,6} is a array
    //a[2]={7,8,9} is a array

    int *ptr;

    ptr=&a[0][0];
    //this means ptr is pointing to a[0]'s base address of array

    //ptr=&a[0][0];
    //storing 1st element  address of entire array


    //from here 1
    printf("address of begining of array:\n");

    printf("%p \n",a);
    //array name itself points to the first element a[0] array  base address

    printf("%p \n",&a);
    //the base address of ~complete array~
    //can be read as address of array a

    printf("%p \n",a[0]);
    //a[0] is the 1_D array ,it stores the base address of its first element
    //so it returns base of address of a[0]
    
    printf("%p \n",&a[0][0]);
    //first element address of entire array

    printf("%p \n",*a);
    //a stores the first element a[0]'s base address 
    //*a gives  element at that address.so it stores base address of a

    printf("%p \n",ptr);
    //pointer ptr stores the base addres array a

    //end here 1
    //everything in 1 prints the same
    printf("\n");




    //from here 2
    printf("second element of the array\n");
    printf("%p\n",a+1);
    //a itself points to first element a[0]'s base address 
    //so a+1 gives next element a[1]'s base address

    printf("%p\n",a[1]);
    //addres of 2nd row i.e a[1] as arrays stores the base address of its elemennt 4's address

    printf("%p\n",&a[1]);
    //a[1] as an array stores the base address of its first element as in case of single array

    printf("%p\n",*(a+1));
    //a+1 ppoints to the a[1]'s base address i.e it stores the address of a[1]=a+1=a[1][0] address
    //*(a+1) gives a[1]'s base address

    printf("%p\n",&a[1][0]);
    //a[1][0] is the element 
    //&a[1][0] address of a[1][0] element

    //end here 2

    //everything in 2 prints the same
    printf("\n");
    



    //from here 3
    printf("a[3] or end of array\n");
    printf("%p\n",&a+1);
    //&a is the address of complete array
    //+1 adds the (1*(size of array)) 
    //&a+1 gives address of next address after array a

    printf("%p\n",a+3);
    //a stores the address of entire array base address
    //a+3 gives the a[3]'s address 

    //end here 3
    //everything in 3 prints the same
    printf("\n");





    //from here 4
    printf("a[0][2] address:\n");
    printf("%p\n",(*a+2));
    //a stores the base address of {a[0]} as 1_D array
    //*a gives the stored addres of a[0]'s base address
    //+2 adds the (2*(size first element of a[0] ))
    
    printf("%p\n",&a[0][2]);

    //end here 4
    printf("\n");




    for (int m = 0; m < 3; m++)
    {
        for (int n = 0; n < 3; n++)
        {
            printf("a[%d][%d]::%p \t\t",m,n,&a[m][n]);
        }
        printf("\n");
    }
    
    printf("\n");





//a[i][j]=*(*(a+i)+j)
//a[i]=*(a+i)
//so a[i][j]=*(a[i]+j)

}