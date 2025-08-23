
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
    struct student s1 ;
    strcpy(s1.name , "Coder");
    s1.roll = 101;
    s1.cgpa = 3.6;
    
    return 0;
}






// #include <stdio.h>
// int main(){
    // return 0;
// }


// //  // 👉👉  🔹🔹  Question 1️⃣
// Emoji
// // 1️⃣ 2️⃣ 3️⃣ 4️⃣ 5️⃣ 6️⃣ 7️⃣ 8️⃣ 9️⃣ 🔟