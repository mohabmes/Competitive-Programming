#include <iostream>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <cassert>
#define ll long long

using std::vector;
using std::cin;
using std::cout;

ll fibonacci_fast_last_digit(int n) {
    int fib [n];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; i++)
        fib[i] = (fib[i-1] + fib[i-2]) % 10;

    return fib[n];
}


int main() {
    int n = 0;
    std::cin >> n;

    std::cout << fibonacci_fast_last_digit(n) << '\n';
    return 0;
}

