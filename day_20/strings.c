#include <stdio.h>

int main() {
  int numbers[4] = {0};
  char name[4] = {'a'};

  printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
  printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
  printf("name: %s\n", name);

  numbers[0] = 1;
  numbers[1] = 2;
  numbers[2] = 3;
  numbers[3] = 4;

  name[0] = 'B';
  name[1] = 'O';
  name[2] = 'B';
  name[3] = '\0';

  printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
  printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
  printf("name: %s\n", name);

  char *another = "BOB";
  printf("another: %s\n", another);
  printf("another each: %c %c %c %c\n", another[0], another[1], another[2], another[3]);

  int hack = name[0] + name[1] + name[2] + name[3];
  printf("Hack: %d", hack);
  return 0;
}
