/*
used to store different data types under a single name

syntax:
struct name_of_structure{
    datatype1 variable1_name;
    datatype2 variable2_name;
};


example:
struct student{
    int id;
    char gender;
    float weight;
};


struct student is iteslf is a datatype like int,float,char,double
example:
int      ---    struct student
int a    ---    struct student a
int a=10 ---    struct student a={10,M,59.5}


Note:
1)varaible1_name should diffent from variable2_name
    int id and float id is not valid
2)cannot be initialized like below,its not valid
    struct student{
    int id=20;
    char gender=F;
    float weight=56.8;
    };

*/



