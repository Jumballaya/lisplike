#include <stdio.h>

/* Buffer for user input */
static char input[2048];

int main(int argc, char** argv) {

  puts("<----- <----- <--- REPEATER VERSION.1.0.0 ------> -------->");
  puts("|<--------------------CTRL+C To End---------------------->|");

  /* Main Loop */
  while (1) {

    /* Prompt for input */
    fputs("REPEAT> ", stdout);

    /* Read user input, max of 2048 */
    fgets(input, 2048, stdin);

    /* Print / Evaluation */
    printf("You said: %s\n", input);
  }

  return 0;
}
