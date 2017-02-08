#include <stdio.h>

int add(int x, int y) {

  int res = x + y;
  return res;
}

int subtract(int x, int y) {

  int res = x - y;
  return res;
}

int multiply(int x, int y) {

  int res = x * y;
  return res;
}

int divide(int x, int y) {

  int res = x / y;
  return res;
}

int main() {

  int added = add(1, 3);
  int subbed = subtract(3, 2);
  int multi = multiply(2, 10);

  printf("1 + 3 = %d\n", added);
  printf("3 - 2 = %d\n", subbed);
  printf("2 * 10 = %d\n", multi);

  return 0;
}
