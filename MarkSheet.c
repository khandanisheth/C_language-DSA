#include <stdio.h>

int main() {
    char name[50];
    int rollNo, marks[5], total = 0;
    float percentage;

    printf("Enter the student's name: ");
    scanf("%s", name);
    printf("Enter the student's roll number: ");
    scanf("%d", &rollNo);
    printf("Enter the student's marks in 5 subjects:\n");

    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i+1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = (float)total / 5;

    printf("\n---------------------------\n");
    printf("        MARKSHEET\n");
    printf("---------------------------\n");
    printf("Name: %s\n", name);
    printf("Roll Number: %d\n", rollNo);
    printf("Total Marks: %d/500\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    if (percentage >= 90) {
        printf("Grade: A+\n");
    } else if (percentage >= 80) {
        printf("Grade: A\n");
    } else if (percentage >= 70) {
        printf("Grade: B+\n");
    } else if (percentage >= 60) {
        printf("Grade: B\n");
    } else if (percentage >= 50) {
        printf("Grade: C\n");
    } else {
        printf("Grade: Fail\n");
    }

    return 0;
}
