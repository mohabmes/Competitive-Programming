#include <iostream>

int get_change(int m) {
  int n = 0;

  while (m >= 10){ n += m / 10, m %= 10; }
  while (m >= 5){ n += m / 5, m %= 5; }
  if (m > 0) return m+n;

  return n;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}

