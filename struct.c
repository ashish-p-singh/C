// #include <stdio.h>
// typedef struct {
//     char name[50];
//     int age;
//     int gpa;
// }Student;
// int main(){
//     Student s={"Ashish",20,4};
//     Student a={"Koushik",18,4};
//     printf("%s\n",a.name);
//     printf("%d",a.gpa);
// }
//-------------------------------------------------
#include <stdio.h>
// typedef struct{
//     int age;
//     char name[30];
//     float marks;
//     int roll_no;
    
// }Student;
// int main(){
//     Student s1={21,"Ayush",100.00,19};
//     printf("%d \n",s1.age);
//     printf("%.2f \n",s1.marks);
//     printf("%s \n",s1.name);
// }
//--------------------------------
#include <stdio.h>
typedef struct{
    int emp_id;
    char name[25];
    float salary;
}Employee;
int main(){
    Employee e1={1,"Ayush",20.0};
    printf("%.2f",e1.salary);
}