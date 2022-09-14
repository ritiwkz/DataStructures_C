#include<stdio.h>
#include <string.h>

typedef struct Books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} Book;

int main(){
    Book B;

    strcpy(B.title, "C Programming");
    strcpy(B.author, "Nuha Ali");
    strcpy(B.subject, "C Programming");
    B.book_id = 6495407;

    printf( "Book Title : %s\n", B.title);

    return 0;
}