#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
  char currentChar = 0;
  char prevChar = 0;
  unsigned char unsignedCurrentChar = 0;
  unsigned char unsignedPrevChar = 0;

  while(currentChar >= prevChar) {
    prevChar = currentChar;
    currentChar++;
  }

  /* chars are signed by default, meaning their actual int value can be negative */
  printf("Minimum char is %d\n", currentChar);
  printf("Maximum char is %d\n", prevChar);


  /* here, we are overflowing the variable, only breaking the loop once the new value is LESS */
  /* than the old value (meaning it reset to the min) */
  while(unsignedCurrentChar >= unsignedPrevChar) {
    unsignedPrevChar = unsignedCurrentChar;
    unsignedCurrentChar++;
  }

  /* unsigned chars have a range that is either zero or positive */
  printf("Minimum unsigned char is %d\n", unsignedCurrentChar);
  printf("Maximum unsigned char is %d\n", unsignedPrevChar);

  return 0;
}
