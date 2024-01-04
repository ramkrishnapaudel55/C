#include <stdio.h>

struct student {
    char name[50];
    int roll;
    char faculty[50];
};

int main() {
    struct student s;
    FILE *fptr;

    printf("Enter student name: ");
    scanf("%s", s.name);
    printf("Enter student roll: ");
    scanf("%d", &s.roll);
    printf("Enter student faculty: ");
    scanf("%s", s.faculty);

    fptr = fopen("student.txt", "w");

    fprintf(fptr, "Name: %s\n", s.name);
    fprintf(fptr, "Roll: %d\n", s.roll);
    fprintf(fptr, "Faculty: %s\n", s.faculty);

    fclose(fptr);

    fptr = fopen("student.txt", "r");

    printf("\nStudent information from file:\n");
    fscanf(fptr, "Name: %s\n", s.name);
    fscanf(fptr, "Roll: %d\n", &s.roll);
    fscanf(fptr, "Faculty: %s\n", s.faculty);

    printf("Name: %s\n", s.name);
    printf("Roll: %d\n", s.roll);
    printf("Faculty: %s\n", s.faculty);

    fclose(fptr);

    return 0;
}
