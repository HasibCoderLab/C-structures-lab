
// ================================================
//               * Language: C
//               * Topic: Structures
// ===============================================

// 👉👉 🔹🔹Question 1️⃣  write a program to store the data  of 3 students

#include <stdio.h>
#include <string.h>
// user difined
struct student
{
    char name[100];
    int roll;
    float cgpa;
};
int main()
{
    // 1st Student
    struct student s1;
    strcpy(s1.name, "Coder");
    s1.roll = 101;
    s1.cgpa = 3.6;
    printf("student name = %s\n", s1.name);
    printf("Student roll no : %d\n", s1.roll);
    printf("Student cgpa : %f\n", s1.cgpa);
    // 2d Student
    struct student s2;
    strcpy(s2.name, "Programmer");
    s2.roll = 103;
    s2.cgpa = 3.4;
    printf("Student Name %s\n", s2.name);
    printf("student roll no : %d\n", s2.roll);
    printf("Student cgpa :%f\n", s2.cgpa);
    // 3rd Student
    struct student s3;
    strcpy(s3.name, "Web Developer");
    s3.roll = 106;
    s3.cgpa = 3.5;
    printf("Student Name : %s\n", s3.name);
    printf("Student  roll no : %d\n", s3.roll);
    printf("Student cgpa %f\n", s3.cgpa);
    return 0;
}

// 👉👉 🔹🔹Question 2️⃣ Enter address  (house no , block , city ,state) of 5 people

#include <stdio.h>
struct address
{
    int houseNo;
    int block;
    char city[50];
    char state[50];
};
void printAdds(struct address adds);
int main()
{
    struct address adds[5];
    // input  for  1st Person
    printf("Enter Info For 1st Person :");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);

    // input  for  2nd Person

    printf("Enter Info For 2nd Person :");
    scanf("%d", &adds[1].houseNo);
    scanf("%d", &adds[1].block);
    scanf("%s", adds[1].city);
    scanf("%s", adds[1].state);

    // input  for  3rd  Person

    printf("Enter Info For 3rd  Person :");
    scanf("%d", &adds[2].houseNo);
    scanf("%d", &adds[2].block);
    scanf("%s", adds[2].city);
    scanf("%s", adds[2].state);

    // input  for  4th  Person

    printf("Enter Info For 4th  Person :");
    scanf("%d", &adds[3].houseNo);
    scanf("%d", &adds[3].block);
    scanf("%s", adds[3].city);
    scanf("%s", adds[3].state);

    // input  for  5th  Person

    printf("Enter Info For 5th  Person :");
    scanf("%d", &adds[4].houseNo);
    scanf("%d", &adds[4].block);
    scanf("%s", adds[4].city);
    scanf("%s", adds[4].state);

    printAdds(adds[0]);
    printAdds(adds[1]);
    printAdds(adds[2]);
    printAdds(adds[3]);
    printAdds(adds[4]);

    return 0;
}
// Function Definition
void printAdds(struct address adds)
{
    printf("address is :%d,%d,%s,%s\n", adds.houseNo, adds.block, adds.city, adds.state);
}

// 👉👉  🔹🔹  Question 3️⃣  Create a structure to store  vector .
// Then make a funtion  to return sum of 2 vector

#include <stdio.h>
struct vector
{
    int x;
    int y;
};
void calSum(struct vector v1, struct vector v2, struct vector sum);
int main()
{
    struct vector v1 = {7, 5};
    struct vector v2 = {5, 9};
    struct vector sum = {0};
    calSum(v1, v2, sum);
    return 0;
}
void calSum(struct vector v1, struct vector v2, struct vector sum)
{
    sum.x = v1.x + v2.x;
    sum.y = v2.y + v2.y;
    printf("Value of X = %d\n", sum.x);
    printf("Value of Y  = %d\n", sum.y);
}

// /// 👉👉  🔹🔹  Question 4️⃣  create a structure a to store copmlex number .(use arrow operator)

#include <stdio.h>
// user Difined
struct copmlex
{
    int real;
    int img;
};
int main()
{

    struct copmlex number1 = {10, 5};
    struct copmlex *ptr = &number1;
    printf("Real part -> %d\n", ptr->real);
    printf("img part -> %d\n", ptr->img);
    return 0;
}

// //  // 👉👉  🔹🔹  Question 5️⃣  make a structure to sotre   Bank account information
//  of a costomer of ABC  bank Also ,make as alias  for it

#include <stdio.h>
typedef struct bankAccount
{
    int acc;
    char name[100];
} BA;
int main()
{
    BA acc1 = {101, "Coder"};
    BA acc2 = {102, "Programmer"};
    BA acc3 = {103, "Developer"};
    printf("Account Number : %d\n", acc1.acc);
    printf("Account person name is : %s\n", acc1.name);
    return 0;
}

// #include <stdio.h>
// int main(){

//     return 0;
// }
// //  // 👉👉  🔹🔹  Question
// Emoji
// // 1️⃣ 2️⃣ 3️⃣ 4️⃣ 5️⃣ 6️⃣ 7️⃣ 8️⃣ 9️⃣ 🔟