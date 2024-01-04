#include <stdio.h>
#include <stdlib.h>

struct College {
    char name[50];
    char address[100];
    char phone[15];
};

int main() {
    int n, i;
    printf("Enter the number of colleges: ");
    scanf("%d", &n);

    struct College colleges[n];

    // Input college details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of college %d:\n", i + 1);
        printf("Name: ");
        gets(colleges[i].name, 100);
        printf("Address: ");
        gets(colleges[i].address);
        printf("Phone number: ");
        gets(colleges[i].phone);
    }

    // Write college details to file
    FILE *fp;
    fp = fopen("college.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    for (i = 0; i < n; i++) {
        fprintf(fp, "College %d\n", i + 1);
        fprintf(fp, "Name: %s\n", colleges[i].name);
        fprintf(fp, "Address: %s\n", colleges[i].address);
        fprintf(fp, "Phone number: %s\n", colleges[i].phone);
        fprintf(fp, "\n");
    }
    fclose(fp);
    printf("College details written to file college.txt.\n");

    // Display college details on screen
    printf("\nCollege details:\n");
    fp = fopen("college.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    char ch[1000] = fgets(fp);
    while (ch[i] != EOF) {
        printf("%c", c);
        ch[i] = fgets(fp);
    }
    fclose(fp);

    return 0;
}
