#include <stdio.h>


int * createArray() {

  static int nums[10];
  for (int i = 0; i < 11; i++) {
    nums[i] = i;
  }

  return nums;
}

int main() {

  int *arr;
  arr = createArray();

  for (int i = 0; i < 11; i++) {

    printf("Number: %d\n", arr[i]);
  }

  return 0;
}
