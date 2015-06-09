#include <stdio.h>
#include <math.h>

/* Automatic type conversion - those that convert narrower operand into a wider one, without losing info */
/* For instance, converting an int to float */
/* Going the other way is possible, but not recommended since you can lose aspects of the operand */

/* Explicit type coercion can occur via a "cast": */
          /* (type-name) expression */
/* which will convert the expression into the type needed */
/* As an alternative, use a function prototype to declare types */
          /* double sqrt(double); */
          /* root = sqrt(2); */
/* which coerces the int 2 to be a double value 2.0 without casting */

int htoi(char s[], int size) {

  int i, hexdigit;
  int result = 0;
  int location = 0;

  for(i = (size - 1); s[i] != '\0'; --i) {
    if(s[i] >= '0' && s[i] <= '9') {
      hexdigit = s[i] - '0';
    } else if(s[i] >= 'a' && s[i] <= 'f') {
      hexdigit = s[i] - 'a' + 10;
    } else if(s[i] >= 'A' && s[i] <= 'F') {
      hexdigit = s[i] - 'A' + 10;
    } else {
      printf("Not a hexdigit");
      break;
    }

    result += (hexdigit * pow(16, location));

    ++location;
  }

  return result;
}

int main() {
  printf("%d\n", htoi("7DE", 3));
  printf("%d\n", htoi("7DEF", 4));
  printf("%d\n", htoi("7DXE", 4));
}

