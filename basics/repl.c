#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <editline/readline.h>

int main(int argc, char** argv) {

  puts("<------ <---- <-- <- REPL VERSION.1.0.0 -> --> ----> ------>\n");
  puts("|<---------------------CTRL+C To End---------------------->|\n");

  int state = 1;

  while (state) {

    /* Output the prompt */
    char* input = readline("REPL> ");

    /* Add input to history */
    add_history(input);

    /* Evaluate */
    if (!(strncmp(input, "quit", 4))) {
      state = 0;
    } else if (!(strncmp(input, "help", 4))) {
      puts("<---------------> HELP <---------------->");
      puts("| Command       |      | Description    |");
      puts("-----------------------------------------");
      puts("| help          |      | Print Commands |");
      puts("| quit          |      | Exit REPL      |");
      puts("| repeat        |      | Echos command  |");
    }

    /* Free input */
    free(input);
  }

  return 0;
}
