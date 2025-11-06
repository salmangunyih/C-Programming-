/*
Nama:Griffin Waruinge  Njuguna 
Reg No:CT101/G/26480/25
Description:writing student data to result.dat
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int regNo;
    float totalMarks;
};

int main() {
    FILE *fp;
    struct Student s;
    int n, i;

    fp = fopen("results.dat", "wb");
    if (fp == NULL) {
        printf("Error opening results.dat!\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        fgets(s.name, sizeof(s.name), stdin);
        s.name[strcspn(s.name, "\n")] = 0;

        printf("Registration Number: ");
        scanf("%d", &s.regNo);

        printf("Total Marks: ");
        scanf("%f", &s.totalMarks);
        getchar();

        fwrite(&s, sizeof(struct Student), 1, fp);
    }

    fclose(fp);
    printf("\nAll records saved to results.dat successfully.\n");
    return 0;
}