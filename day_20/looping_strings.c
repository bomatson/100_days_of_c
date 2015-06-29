#include <stdio.h>

int main(int argc, char *argv[]) {
  int i = 0;

  for(i = 1; i < argc; i++)
    printf("arg: %d: %s\n", i, argv[i]);

  // this is a two-dim array of strings
  char *states[] = { "CA", "OR", "WS", "TX" };
  int numStates = 4;

  for(i = 0; i < numStates; i++)
    printf("state: %d: %s\n", i, states[i]);

  return 0;
}
