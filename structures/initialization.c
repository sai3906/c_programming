#include<stdio.h>

//structure can pack different types into one variable
//here struct tag is optional,but naming/tag is good coding practice
//its a global declaration ,we can access it any function
struct student
{
    int id;
    char name[20];
    float marks;
}s2={38,"tag",11.7};

//it is similar to
// int a=5;
//here int=struct student
//     a=s2
//     5={38,"tag",11.7}

struct student s3={44,"large",56.8};


struct staff
{
    char employ_name[20];
}tar={"tomboy"};



int main(){

    //strucute inializations
    //type_1:in array form 
    struct student s1={34,"sai",78.5};
    printf("s1\n\tid:%d \t name:%s \t marks:%f \n \n "   ,s1.id, s1.name,s1.marks);

    //type_2:while declaring struct
    printf("s2\nid:%d \t name:%s \t marks:%f \n"   ,s2.id, s2.name,s2.marks);
    printf("s2.marks  %f\n\n",s2.marks);

    //type_3:before main function
    printf("s3\nid:%d \t name:%s \t marks:%f \n \n "   ,s3.id, s3.name,s3.marks);

    //type_4:partial initialization of first memeber ,remaining are taken as null as defualt
    struct student s4={45};    
    printf("s4\nid:%d \t name:%s \t marks:%f \n \n "   ,s4.id, s4.name,s4.marks);

    //type_5:copying another varible
    struct student s5;
    s5=s2;
    printf("s5\nid:%d \t name:%s \t marks:%f \n \n "   ,s5.id, s5.name,s5.marks);
    //but not this
    //tar=s2

    //we cannot compare s1>s2 or s1==s2
    //we can do this
    if(s1.marks>s2.marks){
        printf("s1 marks are great\n");
    }

    

return 0;
}
