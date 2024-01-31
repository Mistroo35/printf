#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n =1000009;
  char *stack = malloc(12);
  int top = -1;

  while (n) {
    int t = n % 2;
    if (n < 2) {
      t = 1;
    }
    n /= 2;

    stack[++top] = t + '0';
  }

  while (top >= 0) {
    putchar(stack[top--]);
  }

  free(stack);

  printf("\n%o\n",7);

  return 0;
}
