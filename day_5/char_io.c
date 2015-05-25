#include <stdio.h>

int main() {
  int c;

  c = getchar();
  printf("%d", c);

  while(c != EOF) {
    putchar(c);
    c = getchar();
  }
}
