#include <stdio.h>

#define MAX_BUFFER   1024
#define SPACE        (char)' '
#define TAB          (char)'\t'

int CalculateNumberOfSpaces(int Offset, int TabSize)
{
   return TabSize - (Offset % TabSize);
}

int getLine(char s[], int lim)
{
  int c, i;

  for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;
  if(c == '\n')
  {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';

  return i;
}

int main(void)
{
  char  Buffer[MAX_BUFFER];
  int TabSize    = 5;

  int i, j, k;

  while(getLine(Buffer, MAX_BUFFER) > 0)
  {
    for(i = 0; Buffer[i] != '\0'; i++)
    {
      if(Buffer[i] == TAB)
      {
        j = CalculateNumberOfSpaces(i, TabSize);
        for(k = 0; k < j; k++)
        {
          putchar(SPACE);
        }
      }
      else
      {
        putchar(Buffer[i]);
      }
    }
  }

  return 0;
}
