#include <stdio.h>

void showbits(unsigned int x)
{
  int i;
  for(i=(sizeof(int)*8)-1; i>=0; i--)
    (x&(1<<i))?putchar('1'):putchar('0');

  printf("\n");
}

unsigned getbits(unsigned x, int p, int n) {
  /* Right shifting will shift bits right, causing blanks to appear on the left:  */
  /* 10010 >> 1 will become 01001 */
  /* With an unsigned int, these blanks are replaced by zeroes (logical shift) */
  /* With an signed int, these blanks are replaced by the signed bit of the left operand (logical shift) */

  printf("BITS BEFORE SHIFT:\n");
  showbits(x);
  printf("BITS AFTER 1 RIGHT SHIFT:\n");
  showbits(x >> 1);

  printf("BITS AFTER MOVING TO RIGHT END OF WORD, %d bits from %d position:\n", n, p);
  showbits(x >> (p+1-n));
  /* this moves the desired field to the right end of the word */

  unsigned right = (x >> (p+1-n));

  return right & ~(~0 << n);
}

int main() {
  printf("GET BITS: %d", getbits('f', 4, 1));
}
