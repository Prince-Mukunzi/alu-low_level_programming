#include <stdio.h>

int main(void) {

  int x = 97;
  char n = '\n';

  while (x < 123) {
    if (x == 'q' || x == 'e') {
      x++;
      continue;
    }
    putchar(x);
    x++;
  }

  return 0;
}