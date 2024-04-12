#include <stdio.h>

/*
 *Να εκπονήσετε έναν αλγόριθμο που να δέχεται σαν είσοδο έναν μηαρνητικό
 *ακέραιο n και υπολογίζει τον μικρότερο ακέραιο k για τον οποίο ισχύει ότι n ≤
 * 2k.
 */
int find_smallest_k(int n) {
  int k = 0;
  int power = 1;
  while (power < n) {
    power *= 2;
    k++;
  }
  return k;
}

int main() {
  printf("%d", find_smallest_k(5));
  return 0;
}
