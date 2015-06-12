#include <stdio.h>

int any(char s[], char c[]) {
  int i, j, result = -1;

  for(i = 0; s[i] != '\0'; i++) {
    for(j = 0; c[j] != '\0'; j++) {
      if(s[i] == c[j]) {
        /* its a match */
        result = i;
        break;
      }
      break;
    }
  }
  /* this will close off the array of chars */
  return result;
}

int main() {
  char quietDown[] = "a string!";

  int local = any(quietDown, "string");
  printf("First location of char: %d\n", local);
  return 0;
}

