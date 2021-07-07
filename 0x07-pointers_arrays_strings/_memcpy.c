#include "2-strchr.c"
#include "3-strspn.c"
#include <stdio.h>

char *_strstr(char *haystack, char *needle) {
  int i, j, nl = 0;
  while (needle[nl]) {
    nl++;
  }
  for (i = 0; haystack[i] != '\0'; i++) {
    if (needle[0] == haystack[i]) {
      for (j = 1; needle[j] && haystack[i + j] && j < nl; j++) {
        if (needle[j] != haystack[i + j]) {
          break;
        }
      }
      if (j == nl) {
        return (&haystack[i]);
      }
    }
  }
  return (0);
}

int main(void) {

  char *s = "hello, worl";
  char *f = "world";
  char *t;

  t = _strstr(s, f);
  printf("%s\n", t);
  return (0);
}