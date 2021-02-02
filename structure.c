#include <stdio.h>
#include <string.h>
typedef int i;
typedef char c;
typedef struct Student
{
    c name[10];
    i id;
    i rollno;
} Str;
Str Student1, Student2;

int main()
{

    Student2.rollno = 13;
    strcpy(Student2.name, "Angela");
    strcpy(Student1.name, "suhail");
    Student1.id = 15;
    Student1.rollno = 12;
    Student2.id = 16;

    printf("Student 1 name is = %s\n", Student1.name);
    printf("Student 1 id is : %d\n", Student1.id);
    printf("Student 1 roll no : %d\n", Student1.rollno);
    printf("Student 2 name is = %s\n", Student2.name);
    printf("Student 2 id is : %d\n", Student2.id);
    printf("Student 2 roll no : %d\n", Student2.rollno);
    char string[] = "<h1> This is my heading </h1>";
    strset(string, 2);
    printf("%s",string);
    return 0;
}