#include<stdio.h>
void main(){
  struct student {
    char  name[20];
    int marks;
  };
 struct student s1={"sai",98};
 printf("\n name : %s \t marks : %d \n",s1.name,s1.marks);
/*
  what if needed to store 100 students
  we cant declare s1,s2,...s100
  hence we declare array of structure
*/


 struct student a[3];
  for(int i=0;i<3;i++){
    printf("\nenter %d details\n",i+1);
    scanf("%s %d",a[i].name,&a[i].marks);
    //scanf("%s %d",&a[i].name,&a[i].marks); it didnt work 
  }
  
  for(int i=0;i<3;i++){
    printf("%d name :%s marks :%d \n",i,a[i].name,a[i].marks);
  }

}
