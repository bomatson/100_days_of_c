#include <stdio.h>

/* print Farenheit! */

int main() {
  /* defined vars */

  int fahr, celsius,
      lower, upper, step;

  /* establish bounds of the program */
  lower = 0;
  upper = 300;
  step = 20;
  fahr = lower;

  while (fahr <= upper) {
    /* translate F to C */
    /* notice that we divide by 9 after multiplying by 9 */
    /* this occurs because dividing 5 and 9 would result in 0 */
    /* since integer division truncates (any fractional part is discarded) */

    celsius = 5 * (fahr - 32) / 9;

    /* print to console, note to interpolation */
    /* also, the numbers indicate column width */

    printf("%3d\t%6d\n", fahr, celsius);
    fahr = fahr + step;
  }
}

