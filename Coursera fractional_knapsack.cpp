#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <utility>

using namespace std;

double get_optimal_value(int n, int capacity, vector<pair<int,int>> valuePerWight) {

  vector<pair<double,int>> valuePerUnit(n);
  double value = 0.0;

  for (int i = 0; i < n; i++) {
    valuePerUnit[i].first = valuePerWight[i].first / (double)valuePerWight[i].second;
    valuePerUnit[i].second = valuePerWight[i].second;
  }
  sort(valuePerUnit.begin(), valuePerUnit.end());

  for (int i = n-1; i >= 0; i--) {
    double suitable_unit = min(capacity, valuePerUnit[i].second);
    value += suitable_unit * valuePerUnit[i].first;
    capacity -= suitable_unit;
  }

  return value;
}

int main() {
  //freopen("input.txt", "r",stdin);

  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<pair<int,int>> valuePerWight(n);

  for (int i = 0; i < n; i++)
    std::cin >> valuePerWight[i].first >> valuePerWight[i].second;

  double optimal_value = get_optimal_value(n, capacity, valuePerWight);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}

