//Write a program to determine wheter a student is eligible for addmission based on marks in different usking nested if else statment
#include <stdio.h>
int main() {
    int marks;
    printf("Enter marks out of 500: ");
    scanf("%d", &marks);
    if (marks >= 135) {
        printf("The student is eligible for admission\n");
    } else {
        printf("The student is not eligible for admission\n");
    }
    return 0;
}