//  structure User define deta teyp

// ================================================
//               * Language: C
//               * Topic: Structures
// ===============================================

#include <stdio.h>
#include <string.h>
// user difined
struct student {
char name[100];
int roll;
float cgpa;
};
int main(){
    struct student s1 ;
    strcpy(s1.name , "PaniWala");
    s1.roll = 120;
    s1.cgpa = 3.2;
    printf("student name is %s\n" , s1.name);
    printf("student roll is %d\n" , s1.roll);
    printf("student name is %f\n" , s1.cgpa);

    return 0;
}

//  🎯

#include <stdio.h>
#include <string.h>
// user Difined
struct student {
char name [100] ;
int roll;
float cgpa;
};
int main(){
    struct student CSE[152];
    strcpy(CSE[0].name , "Programmer");
    CSE[0].roll = 125;
    CSE[0].cgpa = 3.6;
    printf("Student name is %s\n" , CSE[0].name);
    printf("Student roll : %d\n " , CSE[0].roll);
    printf("Student cgpa : %f\n" , CSE[0].cgpa);

    return 0 ;
}

// 🛑 Initializing   Structure
#include <stdio.h>
#include <string.h>
// User Difined
struct student{
char name [20];
int roll;
float cgpa;
};
int main(){
    struct  student  s1= {"coder" , 630, 3.5};
    printf("Student name is %s\n , student roll : %d\n , student cgpa %f\n" , s1.name, s1.roll, s1.cgpa);
    return 0;
}

// 🛑  Ponter Operator

#include <stdio.h>
#include <string.h>
// user difined
struct student {
char name[20];
int roll;
float cgpa;
};
int main(){
    struct student s1 = {"Hsaan" , 152, 3.6};
    struct student *ptr = &s1;
    printf("Student name wirh ptr : %s\n" , (*ptr).name);
    printf("Student roll  with ptr: %d\n" , (*ptr).roll);
    printf("student cgp with ptr %f\n " , (*ptr).cgpa);
    return 0;
}

// 🛑  arrow Operator

#include <stdio.h>
// user Defined
struct student {
char name [20];
int roll;
float cgpa;
};
int main(){
    struct student s01 = {"Fahim" , 220 , 3.2};
    struct student *ptr =  &s01;
    printf("Student name -> %s\n" , ptr->name);
    printf("Student roll is -> %d\n" , ptr->roll);
    printf("Student cgpa -> %f\n" , ptr->cgpa);
    return 0;
}

// 🛑    Passing structure  to function  | Call by value 🌟 🌟 |

#include <stdio.h>
// userr Defined
struct student {
char name[23];
int roll;
float cgpa;
};
void printInfo(struct student s1);

int main(){
    struct student s1 = {"Web Developor" , 203, 3.8};
    printInfo(s1);
    return 0;
}
void printInfo(struct student s1){
    printf("Print Student Information :");
printf("Student name is : %s\n", s1.name);
printf("Student roll : %d\n" , s1.roll);
printf("Student cgpa: %f\n" , s1.cgpa);
}

// 🛑    Passing structure  to function  | Call by Reference 🌟 🌟 |
#include <stdio.h>
// user Difined
struct student {
char name [32];
int roll;
float cgpa;
};
void printInfo(struct student s1);
int main(){
    struct student s1 = {"Programmer" , 302 , 3.4};
    printInfo(s1); // Function call

    s1.roll = 303;
    printf("Student roll ; %d\n" , s1.roll);
    return 0;
}
// Function Definition
void printInfo(struct student s1){
printf("print Information : ");
printf("Student Name is : %s\n" , s1.name);
printf("Student roll ; %d\n" , s1.roll);
printf("Student cgpa : %f\n" , s1.cgpa);
s1.roll = 303;
}

//    Typedef Keyword

#include <stdio.h>
#include <string.h>
typedef struct CoumputerSceinceEngineearing
{
    char name[22];
    int roll;
    float cgpa;
} CSE;
int main()
{
    CSE s1;
    strcpy(s1.name, "Developer");
    s1.roll = 604;
    s1.cgpa = 2.6;
    printf("Student name is : %s\n", s1.name);
    printf("Student roll : %d\n", s1.roll);
    printf("Student cgpa : %f\n", s1.cgpa);

    return 0;
}

// #include <stdio.h>
// int main(){
// return 0;
// }

// Emoji
// // 1️⃣ 2️⃣ 3️⃣ 4️⃣ 5️⃣ 6️⃣ 7️⃣ 8️⃣ 9️⃣ 🔟 🔳 🔲 ⭐ 🌟 ✨ 💫 🌠 🌌 🟊 🌠 🌟🌟 ⚡ 🔔 🎯  🎖️ 🏆 🛑