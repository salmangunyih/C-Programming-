/*
Nama:Griffin Waruinge  Njuguna 
Reg No:CT101/G/26480/25
Description:display student data from result.dat
*/
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int regNo;
    float totalMarks;
};

int main() {
    FILE *fp;
    struct Student s;

    fp = fopen("results.dat", "rb");
    if (fp == NULL) {
        printf("Error opening results.dat!\n");
        return 1;
    }

    printf("\n--- Student Examination Results ---\n");

    while (fread(&s, sizeof(struct Student), 1, fp)) {
        printf("\nName: %s\n", s.name);
        printf("Registration Number: %d\n", s.regNo);
        printf("Total Marks: %.2f\n", s.totalMarks);
    }

    fclose(fp);
    printf("\nAll records displayed successfully.\n");
    return 0;
}