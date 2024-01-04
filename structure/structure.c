#include <stdio.h>

struct Employee {
  int id;
  char name[50];
  char address[100];
  double salary;
};

int main() {
  int n, i;
  printf("Enter the number of employees: ");
  scanf("%d", &n);

  struct Employee emp[n];

  // Input employee details
  for (i = 0; i < n; i++) {
    printf("\nEnter details of employee %d:\n", i + 1);
    printf("ID: ");
    scanf("%d", &emp[i].id);
    printf("Name: ");
    scanf("%s", emp[i].name);
    printf("Address: ");
    scanf("%s", emp[i].address);
    printf("Salary: ");
    scanf("%lf", &emp[i].salary);
  }

  // Display employee names with salary greater than 50,000
  printf("\nEmployees with salary greater than 50,000:\n");
  for (i = 0; i < n; i++) {
    if (emp[i].salary > 50000) {
      printf("%s\n", emp[i].name);
    }
  }

  return 0;
}
