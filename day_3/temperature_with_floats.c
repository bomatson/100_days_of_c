#include <stdio.h>

int main() {
  double fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  /* notice that the int is coverted into a float */
  fahr = lower;

  /* and again here */
  while (fahr <= upper) {
    /* translate F to C */
    /* now we are able to multiply
     * by the exact floating point number */

    celsius = (5.0/9.0) * (fahr - 32.0);

    /* the .2 indicates how many chars after decimal */

    printf("%3.0f\t%6.2f\n", fahr, celsius);
    fahr = fahr + step;
  }
}

