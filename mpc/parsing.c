#include <stdio.h>
#include <string.h>

/* Declare a buffer for user input of size 2048 */
static char input[2048];

int main(int argc, char** argv) {

  /* Print Version and Exit Information */
  puts("PScript Version a0.0.1");
  puts("Press Ctrl+c to Exit\n");

  /* Main loop controller */
  int running = 1;

  /* In a never ending loop */
  while (running) {

    /* Output our prompt */
    fputs("PScript> ", stdout);

    /* Read a line of user input of maximum size 2048 */
    fgets(input, 2048, stdin);

    if (!strncmp(input, "exit", 4)) {
      running = 0;
    } else {
      /* Echo input back to user */
      printf("%s\n", input);
    }
  }

  fputs("Goodbye!\n", stdout);

  return 0;
}
