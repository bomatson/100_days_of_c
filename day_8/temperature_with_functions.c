#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

double convertFtoC(int fahr);

int main() {
  int fahr;

  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
    printf("%3d %6.2f\n", fahr, convertFtoC(fahr));
  }
}

double convertFtoC(int fahr) {
  return (5.0/9.0) * (fahr-32);
}
