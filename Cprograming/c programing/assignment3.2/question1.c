#include <stdio.h>

int main() {
    int roll_no;
    char name[50];
    float marks1, marks2, marks3, total, percentage;

    // Step 1: Input roll number, name, and marks
    printf("Enter Roll Number: ");
    scanf("%d", &roll_no);

    printf("Enter Name: ");
    scanf(" %[^\n]", name);  // Reads full name with spaces

    printf("Enter marks of three subjects: ");
    scanf("%f %f %f", &marks1, &marks2, &marks3);

    // Step 2: Calculate total marks
    total = marks1 + marks2 + marks3;

    // Step 3: Calculate percentage (assuming each subject is out of 100)
    percentage = (total / 300) * 100;

    // Step 4 & 5: Display and determine division
    printf("\n--- Student Result ---\n");
    printf("Roll No: %d\n", roll_no);
    printf("Name: %s\n", name);
    printf("Total Marks: %.0f\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 60)
        printf("Division: First\n");
    else if (percentage >= 50)
        printf("Division: Second\n");
    else if (percentage >= 40)
        printf("Division: Third\n");
    else
        printf("Division: Fail\n");

    return 0;
}
