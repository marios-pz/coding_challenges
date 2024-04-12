// Copyright 2024 <Marios Papazogloy>
#include <stdio.h>

/*
 * input: positive n integer
 * output: calculate n!
 * Τ(n) = n + O(1) = O(n)
 */
int factorial_calculation(unsigned n) {
  int temp = 1;
  for (unsigned i = 1; i <= n; i++) {
    temp = temp * i;
  }
  return temp;
}

int main() {
  int n = 1;

  printf("dose:");
  scanf("%d", &n);
  if (n <= 0) {
    n = 1;
  }

  printf("%d", factorial_calculation(n));
}
