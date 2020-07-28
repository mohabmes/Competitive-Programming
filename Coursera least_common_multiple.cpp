#include <iostream>

int euclid_gcd(int a, int b) {
  if(b==0)
    return a;
  while(true)
    return euclid_gcd(b, a % b);
}

long long lcm_naive(int a, int b) {
  long long gcd = euclid_gcd(a,b);
  if(gcd == 1) return (long long)a*b;
  return ((long long)a/gcd)*(long long)b;
}



int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << lcm_naive(a, b) << std::endl;
  return 0;
}

