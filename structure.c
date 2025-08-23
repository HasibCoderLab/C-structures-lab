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

// #include <stdio.h>
// int main(){
    // return 0;
// }

// Emoji
// // 1️⃣ 2️⃣ 3️⃣ 4️⃣ 5️⃣ 6️⃣ 7️⃣ 8️⃣ 9️⃣ 🔟 🔳 🔲 ⭐ 🌟 ✨ 💫 🌠 🌌 🟊 🌠 🌟🌟 ⚡ 🔔 🎯  🎖️ 🏆 🛑