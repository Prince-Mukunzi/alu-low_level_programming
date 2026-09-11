#include <stdio.h>

int main(void) {

  int x = 97;
  char n = '\n';

  while (x < 123) {
    putchar(x);
    x++;
  }
  putchar(n);

  return 0;
}