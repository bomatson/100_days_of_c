#include <stdio.h>

#define MAXLINE 1000

/* external vars can be accessed throughout the program and maintain their value */
/* typically these would be in a .h header file */
/* this is definition, which is where the var is created and storage allocated */

int max; // max length seen so far
char line[MAXLINE];
char longest[MAXLINE];

int getLine(void);
void copy(void);

int main() {
  int len;

  /* this is redundant, since storage has already been allocated */
  /* this is declaration, where nature of var is stated but no storage is allocated*/
  extern int max;
  extern char longest[];

  max = 0;
  while((len = getLine()) > 0)
    if(len > max) {
      max = len;
      copy();
    }
  if (max > 0)
    /* %s expects an array of chars */
    printf("%s", longest);
  return 0;
}

int getLine(void) {
  int c, i;
  extern char line[];

  for(i=0; i< MAXLINE -1 && (c=getchar()) != EOF && c!='\n'; i++)
    line[i] = c;
  if (c == '\n') {
    line[i] = c;
    ++i;
  }
  /* this is a null character */
  line[i] = '\0';
  return i;
}

void copy(void) {
  int i;
  extern char line[], longest[];

  i = 0;
  while((longest[i] = line[i]) !='\0')
    ++i;
}
