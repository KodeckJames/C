#include<stdio.h>
#include<string.h>

struct Student
{
    char name[15];
    float gpa;
};

int main(){
    struct Student student1 = {"JJ", 4.0};
    struct Student student2 = {"Jlow", 2.9};
    struct Student student3 = {"JJOndix", 3.6};
    struct Student student4 = {"Obanana", 3.9};

    struct Student students[] = {student1, student2, student3, student4};

    for (int i = 0; i < sizeof(students) / sizeof(students[0]);i++){
        printf("%-12s\t", students[i].name);
        printf("%.2f\n", students[i].gpa);
    };

        return 0;
}