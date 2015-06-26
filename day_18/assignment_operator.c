#include <stdio.h>

// assignment operators!! +=, -=, or any other binary operator
// allows assignment to occur on the same var, with a single operation performed
int bitcount(unsigned c);

int main() {
  unsigned x = 0;

  x += 100;

  printf("X plus 100: %d\n", x);

  x *= 10;

  printf("then multiply by 10: %d\n", x);

  x /= 10;

  printf("then divide by 10: %d\n", x);

  x += 10 + 1;

  printf("then subtract by 11: %d\n", x);

  // also applies to bitwise operators

  printf("Now count the 1 bits: %d\n", bitcount(x));
  return 0;
}

int bitcount(unsigned x) {
  int b;

  for (b = 0; x != 0; x >>= 1)
    if (x & 01)
      b++;

  return b;
}
