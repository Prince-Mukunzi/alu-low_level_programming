#include <stdio.h>

int main(void) {

  int x = 122;

  while (x > 96) {
    putchar(x);
    x--;
  }
  putchar(10);

  return 0;
}