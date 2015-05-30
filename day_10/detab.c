#include <stdio.h>

#define MAX 1000

char statement[MAX];

int main() {
  int i, c;
  extern char statement[];

  for(i=0; i< MAX -1 && (c=getchar()) != EOF; i++)
    statement[i] = c;

    if( c == '\t')
      statement[i] = '0';

  printf("%s", statement);
}
