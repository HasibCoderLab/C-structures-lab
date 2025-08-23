
// ================================================
//               * Language: C
//               * Topic: Structures
// ===============================================

// 👉👉 🔹🔹Question 1️⃣  write a program to store the data  of 3 students

#include <stdio.h>
#include <string.h>
// user difined
struct student{
char name[100];
int roll;
float cgpa;
};
int main(){
    // 1st Student 
    struct student s1 ;
    strcpy(s1.name , "Coder");
    s1.roll = 101;
    s1.cgpa = 3.6;
    printf("student name = %s\n" , s1.name);
    printf("Student roll no : %d\n", s1.roll);
    printf("Student cgpa : %f\n" , s1.cgpa);
    // 2d Student 
    struct student s2;
    strcpy(s2.name , "Programmer");
    s2.roll = 103;
    s2.cgpa = 3.4;
    printf("Student Name %s\n" , s2.name);
    printf("student roll no : %d\n" , s2.roll);
    printf("Student cgpa :%f\n" , s2.cgpa);
   // 3rd Student
   struct student s3;
   strcpy(s3.name , "Web Developer");
   s3.roll = 106;
   s3.cgpa = 3.5;
   printf("Student Name : %s\n" , s3.name);
   printf("Student  roll no : %d\n" , s3.roll);
   printf("Student cgpa %f\n" , s3.cgpa);
    return 0;
}






// #include <stdio.h>
// int main(){
    // return 0;
// }


// //  // 👉👉  🔹🔹  Question 1️⃣
// Emoji
// // 1️⃣ 2️⃣ 3️⃣ 4️⃣ 5️⃣ 6️⃣ 7️⃣ 8️⃣ 9️⃣ 🔟