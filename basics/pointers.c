#include <stdio.h>


int intro() {
  printf("\n");
  printf(">>><<<<>>>>>>><<<<>>>><<<<<<>>><<<<>>>><>>>><<<<><>");
  printf("\n");
  printf("\n");
  return 0;
}

int outro() {
  printf("\n");
  printf(">>><<<<>>>>>>><<<<>>>><<<<<<>>><<<<>>>><>>>><<<<><>");
  printf("\n");
  printf("\n");
  return 0;
}

int basicAddress() {
  int i = 0;
  printf("address of i: %p\n", &i);
  printf("value of i: %i\n", i);
  printf("address of printf: %p\n", printf);
  return 0;
}

int basicPointers() {
  // Create int i and then create a pointer to its address
  int i = 123;
  int *pointer_to_addr = &i;

  printf("address of i: %p\n", &i);
  printf("value of pointer_to_addr: %p\n", pointer_to_addr);
  printf("address of pointer_to_addr: %p\n", &pointer_to_addr);

  printf("value of i: %d\n", i);
  printf("value at which pointer_to_addr points: %d\n", *pointer_to_addr);
  return 0;
}

int arrays() {
  int arr[5] = { 1, 2, 3, 4, 5 };
  printf("Address of the first element: %p\n", &arr[0]);
  printf("Value of the first element: %d\n", arr[0]);
  printf("Value of array: %p\n", arr);
  return 0;
}

int loop() {
  printf("\n");
  int arr[5] = { 1, 2, 3, 4, 5 };
  for(int i = 0; i < 5; i++) {
    printf("%d\n", *(arr + i));
  }
  return 0;
}

int main() {
  intro();
  basicAddress();
  basicPointers();
  arrays();
  loop();

  outro();
  return 0;
}
