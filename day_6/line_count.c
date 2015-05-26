#include <stdio.h>

int main() {
  int c, newlines = 0, blanks = 0, tabs = 0;

  while((c = getchar()) != EOF)
    /* Using single quotes will return the integer value of the char */

    if(c == '\n')
      ++newlines;
    if(c == '\t')
      ++tabs;
    if(c == ' ')
      ++blanks;

  printf("%2d %2d %2d\n", newlines, blanks, tabs);
}
