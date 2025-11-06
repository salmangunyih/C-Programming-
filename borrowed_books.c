/*
Nama:Griffin Waruinge  Njuguna 
Reg No:CT101/G/26480/25
Description:recoRd for books borrowed from the library 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp;
    char bookTitle[100];

    fp = fopen("borrowed_books.txt", "a");
    if (fp == NULL) {
        printf("Error opening borrowed_books.txt!\n");
        return 1;
    }

    printf("Enter book titles (type 'exit' to stop):\n");

    while (1) {
        printf("Book Title: ");
        fgets(bookTitle, sizeof(bookTitle), stdin);
        bookTitle[strcspn(bookTitle, "\n")] = 0;

        if (strcmp(bookTitle, "exit") == 0)
            break;

        fprintf(fp, "%s\n", bookTitle);
        printf("Book title successfully stored.\n");
    }

    fclose(fp);
    printf("\nAll titles saved successfully in borrowed_books.txt.\n");
    return 0;
}