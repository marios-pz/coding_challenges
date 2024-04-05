// @Copyright 2024 <Marios Papazogloy>
// https://open.kattis.com/problems/upprodun/en

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  int N;
  int M;
  cin >> N;
  cin >> M;

  int teamSize = M / N;
  int remainder = M % N;

  for (int i = 0; i < N; ++i) {
    int roomSize = teamSize;
    if (remainder > 0) {
      roomSize++;
      remainder--;
    }

    cout << string(roomSize, '*') << endl;
  }

  return 0;
}
