// Copyright 2024 Marios Papazogloy

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#define MAX_BOUND 50001
#define MIN_BOUND -1

int main() {
  while (true) {
    int n;
    std::cin >> n;

    if (n == 0) {
      break;
    }

    std::vector<int> divisibles;
    std::vector<int> lessers;
    std::vector<int> greaters;

    int lower_bound = MIN_BOUND;
    int upper_bound = MAX_BOUND;

    for (int i = 0; i < n; ++i) {
      int x;
      std::string word, _;
      std::cin >> word >> _ >> x;
      if (word == "less") {
        lessers.push_back(x);
      } else if (word == "greater") {
        greaters.push_back(x);
      } else if (word == "divisible" && x != 0) {
        divisibles.push_back(x);
      }
    }

    if (!lessers.empty()) {
      upper_bound = *std::min_element(lessers.begin(), lessers.end());
    }

    if (!greaters.empty()) {
      lower_bound = *std::max_element(greaters.begin(), greaters.end());
    }

    if (lower_bound >= upper_bound - 1) {
      std::cout << "none" << std::endl;
      continue;
    }

    if (upper_bound >= MAX_BOUND) {
      std::cout << "infinite" << std::endl;
      continue;
    }

    std::vector<int> candidates;
    for (int num = lower_bound + 1; num < upper_bound; ++num) {
      if (num <= 0) // IMPORTANT: ONLY POSITIVE NUMBERS!
        continue;
      bool divisible = true;
      for (int divisor : divisibles) {
        if (num % divisor != 0) {
          divisible = false;
          break;
        }
      }
      if (divisible) {
        candidates.push_back(num);
      }
    }

    if (candidates.empty()) {
      std::cout << "none" << std::endl;
    } else {
      for (size_t i = 0; i < candidates.size(); ++i) {
        if (i > 0) {
          std::cout << " ";
        }
        std::cout << candidates[i];
      }
      std::cout << std::endl;
    }
  }

  return 0;
}
