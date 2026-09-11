#include <stdio.h>

int main(void) {

  int x = 97;
  int y = 65;
  char n = '\n';

  while (x < 123) {
    putchar(x);
    x++;
  }
  while (y < 91) {
    putchar(y);
    y++;
  }
  putchar(n);

  return 0;
}