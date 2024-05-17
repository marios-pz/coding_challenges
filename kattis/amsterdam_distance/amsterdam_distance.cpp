// Copyright 2024 Marios Papazogloy
#include <cmath>
#include <iostream>

const long double PI = acos(-1.0);

struct vec2 {
  int x, y;
};

int main() {
  int M, N;
  double radius;
  vec2 a, b;
  std::cin >> M >> N >> radius;
  std::cin >> a.x >> a.y >> b.x >> b.y;

  long double r = radius / N;

  long double ans1 = r * std::abs(a.y - b.y) +
                     PI * r * std::min(a.y, b.y) * std::abs(a.x - b.x) / M;
  long double ans2 = r * std::abs(a.y + b.y);

  std::cout.precision(14);
  std::cout << std::min(ans1, ans2) << std::endl;
}
