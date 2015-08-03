#include <stdio.h>

int main() {
  // using nested if conditionals: in order to have else at the base conditional
  // you must use braces

  int n = -2;

  if (n > 0) {
    if(n < 4)
      printf("I should not see this");
  }
  else
    printf("I should see this");
}
