#include <stdio.h>
#include <math.h>

int main() {
  // bitwise operators have lower precedence than equality operators != ==
  // In the case below, the expression needs parens
  // if((x & MASK) == 0)


  // the order in which function args are evaluated is not specified

  // for example, the statement below raises a warning when compiling
  // and pow evals n as 3, but n is printed as 2 (since the increment happens after printing)

  int n = 2;

  printf("%d %.2f\n", n++, pow(2,n));

  // different compilers will evaluate this differently, so any expression with potential
  // side effects should be invoked before passing the args
  // the expression below prints n as 3 (as expected)

  int b = 2;
  b++;
  printf("%d %.2f\n", b, pow(2,b));

}
