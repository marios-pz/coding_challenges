// Copyright 2024 <Marios Papazogloy>
#include <stdio.h>

/*
 * input: positive n integer, positive k integer
 * output: Υπολογισμός του αριθμού των διαφορετικών παλετών
 * complexity: O(n + k)
 */
int generate_pallet(const unsigned n, const unsigned k) {
  int numerator = 1;
  for (unsigned i = n; i > n - k; i--) {
    numerator *= i;
  }

  int denominator = 1;
  for (unsigned i = 1; i <= k; i++) {
    denominator *= i;
  }

  return numerator / denominator;
}

int main() {
  unsigned n = 8;
  unsigned k = 5;

  printf("%d\n", generate_pallet(n, k));

  return 0;
}
