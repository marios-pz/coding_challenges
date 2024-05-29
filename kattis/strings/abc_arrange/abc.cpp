#include <algorithm>
#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
  int numbers[3];
  char order[3];
  for (int i = 0; i < 3; ++i)
    cin >> numbers[i];

  for (int i = 0; i < 3; ++i)
    cin >> order[i];

  sort(numbers, numbers + 3);
  unordered_map<char, int> mapping;
  mapping['A'] = numbers[0];
  mapping['B'] = numbers[1];
  mapping['C'] = numbers[2];

  for (int i = 0; i < 3; ++i)
    cout << mapping[order[i]] << " ";
  cout << endl;

  return 0;
}
