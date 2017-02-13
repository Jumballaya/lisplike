#include <stdio.h>
#include <stdlib.h>

/* If compiling on Windows include these functions */
#ifdef _WIN32
#include <string.h>

static char buffer[2048];

/* Fake readline function */
char* readline(char* prompt) {
  fputs(prompt, stdout);
  fgets(buffer, 2048, stdin);
  char* cpy = malloc(strlen(buffer) + 1);
  strcpy(cpy, buffer);
  cpy[strlen(cpy) - 1] = '\0';
  return cpy;
}

/* Fake add_history fuction */
void add_history(char* unused) {}

/* Otherwise unclude the extiline headers */
#else
#include <editline/readline.h>
#endif
#include <string.h>

/* Into the main program */
int main(int argc, char** argv) {

  int program = 1;

  puts("<----- Program V.1.0.0 ----->");
  puts("<----- ||||||||||||||| ----->");
  puts("<---|||||||------||||||||--->");
  puts("<|||||||-------------|||||||>");
  puts("<||---'''''-------'''''---||>");
  puts("<||---(___)-------(___)---||>");
  puts("<||---------|---|---------||>");
  puts("<||--------()---()--------||>");
  puts("<||------<--------->------||>");
  puts("<||-------|-|-|-|-|-------||>");
  puts("<||------<--------->------||>");
  puts("<  (mmmmmmmm|mmm|mmmmmmmm)  >");
  puts("<    (mmmmmm|mmm|mmmmmm)    >");
  puts("<      (mmmm|mmm|mmmm)      >");
  puts("<        (mm|mmm|mm)        >");
  puts("\n\n");

  while(program) {

    char* input = readline("terminal> ");
    add_history(input);

    if (!(strncmp(input, "quit", 4))) {
      program = 0;
    } else {
      printf("%s\n", input);
    }
      free(input);
  }

  puts("\n");
  puts("-------> ------------> -----------------> Thank You! <---- <---- <--");
  puts("\n");

  return 0;

}
