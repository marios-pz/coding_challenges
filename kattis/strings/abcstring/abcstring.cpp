// Copyright 2024 Marios Papazogloy

#include <algorithm>
#include <iostream>
#include <ostream>
#include <string>
#include <vector>

int main() {
  std::string buffer;
  std::cin >> buffer;

  std::vector<std::string> result;
  result.push_back(std::string(1, buffer[0]));
  int i = 0;
  int j = 0;

  for (int k = 1; k < buffer.size(); k++) {
    auto const first = result[i].begin() + j;
    auto const last =
        (first + 3 >= result[i].end()) ? result[i].end() : first + 3;

    if (std::find(first, last, buffer[k]) == result[i].end()) {
      result[i].push_back(buffer[k]);
      goto end;
    }

    if (++i >= result.size()) {
      i = 0;
      result.push_back(std::string(1, buffer[k]));
    }

  end:
    if (k > 0 && k % 3 == 0) {
      j += 3;
    }
  }

#ifdef DEBUG
  std::cout << '{';
  for (auto s : result) {
    std::cout << "'" << s << "'"
              << " ";
  }
  std::cout << '}' << std::endl;
#endif // DEBUG

  std::cout << result.size() << std::endl;

  return 0;
}
