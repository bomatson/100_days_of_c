#include <stdio.h>

void squeeze(char s[], int c) {
  int i,j;

  for(i = j = 0; s[i] != '\0'; i++) {
    if(s[i] != c) {
      s[j++] = s[i];

      /* this is equivalent to */
      /*   s[j] = s[i]; */
      /*   j++; */
    }
  }
  /* this will close off the array of chars */
  s[j] = '\0';
}

int main() {
  int n = 3, x;
  char quietDown[] = "a string!";

  x = n++;
  printf("Value of x incrementing after: %d\n", x);
  printf("Value of n incrementing after: %d\n", n);

  x = ++n;
  printf("Value of x incrementing before: %d\n", x);
  printf("Value of n incrementing before: %d\n", n);

  x = n--;
  printf("Value of x decrementing after: %d\n", x);
  printf("Value of n decrementing after: %d\n", n);

  x = --n;
  printf("Value of x decrementing before: %d\n", x);
  printf("Value of n decrementing before: %d\n", n);

  squeeze(quietDown, '!');
  printf("My squeezed char set: %s\n", quietDown);
}

