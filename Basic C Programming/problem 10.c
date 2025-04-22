/*Write a C program to find the factorial of given n.*/
#include <stdio.h>
int main() {
  int n, i;
  unsigned long long factorial = 1; 
  scanf("%d", &n);
  if (n < 0) {
    printf("Error: Factorial is not defined for negative numbers.\n");
  } else {
    for (i = 1; i <= n; ++i) {
      factorial *= i;
    }
    printf("%llu\n", factorial); // Just print the factorial value
  }
  return 0;
}
