#include <stdio.h>

int main(void) {

  for (int x = '0'; x <= '9'; x++) {
    putchar(x);
    putchar(44);
    putchar(32);
  }

  return 0;
}