/*
Program: Exam Eligibility Checker
Name: Oyalo Allan Moses Otieno
Admission Number: BDSA-03-0026/2026
Description: This program checks whether a student is eligible for final exams
based on attendance percentage and average marks.
*/

#include <stdio.h>

int main() {
    float attendance, averageMarks;

    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    printf("Enter average marks: ");
    scanf("%f", &averageMarks);

    if (attendance >= 75 && averageMarks >= 40) {
        printf("Eligible.\n");
    } else {
        printf("Not eligible.\n");
    }

    return 0;
}