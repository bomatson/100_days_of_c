#include <stdio.h>

// from page 60 in the book (exercise):
// Write a function escape(s,t) that coverts newline and tab chars
// into visible escape seqquences like \n and \t as it copies the string t to s

void escape(char *s, char *t);

int main() {
  char oldString[50] = "This has \n escape esquences and \tboom\n";
  char newString[51];
  escape(newString, oldString);

  printf("here it is: \n%s\n", newString);
  return 0;
}

void escape(char *s, char *t) {
  int i = 0;
  int n = i;

  while (t[i]) {
    switch(t[i]) {
      case '\n':
        s[n] = '\\';
        s[++n] = 'n';
        break;
      case '\t':
        s[n] = '\\';
        s[++n] = 't';
        break;
      default:
        s[n] = t[i];
        break;
    }
    n++;
    i++;
  }

  s[n] = t[i];
}
