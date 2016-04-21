#include <stdio.h>
#include <string.h>

struct Books {
  char title[50];
  char author[50];
  char subject[100];
  int book_id;
};

int main(){

  struct Books Book1; /* Declare Book1 of type Book */
  struct Books Book2; /* Declare Book2 of type Book */

  strcpy(Book1.title, "C Programming");
  strcpy(Book1.author, "Alza Hai");
  strcpy(Book1.subject, "Introduction to the C Programming Language");
  Book1.book_id = 65432;

  strcpy(Book2.title, "Intro to Nuclear Engineering");
  strcpy(Book2.author, "Zilla Yui");
  strcpy(Book2.subject, "Get a hands on approach to the life of an engineer");
  Book2.book_id = 65231;

  printf("Book1's title %s\n", Book1.title );
  printf("Book1's author %s\n", Book1.author );
  printf("Book1's subject %s\n", Book1.subject );
  printf("Book1's id number %d\n", Book1.book_id );

  printf("Book1's title %s\n", Book2.title );
  printf("Book1's author %s\n", Book2.author );
  printf("Book1's subject %s\n", Book2.subject );
  printf("Book1's id number %d\n", Book2.book_id );

  return 0;
}
