#include <stdio.h>

char* toLower(char* let);
int max(int a, int b);

int main() {
  printf("3,2: %d\n", max(3,2));
  printf("3,100: %d\n", max(3,100));
  printf("3,3: %d\n", max(3,3));
  printf("toLower BOBBY: %s\n", toLower("BOBBY"));
  printf("toLower RobErt: %s\n", toLower("RobErt"));
  printf("toLower robert: %s\n", toLower("robert"));
  printf("toLower BOGGA_JFLDKJFDjfgkldjfld: %s\n", toLower("BOGGA_JFLDKJFDjfgkldjfld"));
}

int max(int first, int second) {
  /* ternary! yay! */
  return (first > second) ? first : second;
}

char* toLower(char* let) {
  int i;
  static char copy[sizeof(let)];

  for(i = 0; let[i] != '\0'; i++) {
    (let[i] >= 'A' && let[i] <= 'Z') ? (copy[i] = let[i] + 32) : (copy[i] = let[i]);
  }
  return copy;
};
