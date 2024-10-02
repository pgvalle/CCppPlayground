/**
 * Distributed Systems (SD)
 * Concepts: Inter Process Communitation (IPC)
 * Piping is when you get the output of a program and passes it as input to another program.
 * Operator `|` in linux is an example
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  char c;
  int LFs = 0, i = 0;

  while (i < 1000) {
    if (c == 10) // 10 is the ascii code for line feed (LF)
      LFs++;
    else
      LFs = 0;
    
    fread(&c, 1, 1, stdin);
    printf("%c", c);
    i++;
  }

  return 0;
}
