// Copyright Marios Papazogloy 2024

#include <cctype>
#include <iostream>

using namespace std;

// CMTMUIONPGECNOPNRTOEGSRTA
// C T U O P E N P R O G R A
//  M M I N G C O N T E S T
//
//  CTUPROGR...
int main() {
  int offset = 0;

  string buffer;
  for (std::cin >> offset; offset > 0; std::cin >> offset) {
    getline(std::cin >> std::ws, buffer);
    string s;
    for (char c : buffer) {
      if (c == ' ') {
        continue;
      }
      s += toupper(c);
    }

    std::string result(s.size(), ' ');
    int i = 0, j = 0;
    while (i < s.size()) {
      int k = j;
      while (k < s.size()) {
        result[k] = s[i++];
        k += offset;
      }
      ++j;
    }
    cout << result << endl;
  }

  return 0;
}
