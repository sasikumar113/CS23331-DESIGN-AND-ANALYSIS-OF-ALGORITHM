/*Write a C program to find the biggest among the given 3 integers?*/
#include <stdio.h>
int main() {
  int num1, num2, num3, biggest;
  scanf("%d %d %d", &num1, &num2, &num3);
  biggest = num1;
  if (num2 > biggest) {
    biggest = num2;
  }
  if (num3 > biggest) {
    biggest = num3;
  }
  printf("%d\n", biggest);
  return 0;
}