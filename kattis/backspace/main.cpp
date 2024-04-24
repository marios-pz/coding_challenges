// Copyright 2024 Marios Papazogloy
#include <algorithm>
#include <iostream>
using namespace std;

int main(void) {
  string buffer;
  cin >> buffer;

  string output;
  for (char c : buffer) {
    if (c == '<') {
      if (!output.empty()) {
        output.pop_back();
      }
    } else {
      output += c;
    }
  }

  cout << output;

  return 0;
}
