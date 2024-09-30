#include <iostream>

int main() {
    long long int n; std::cin >> n;
    long long int sum = 0;
    for (int i=0; i < n-1; ++i) {
        int x; std::cin >> x;
        sum += x;
    }

    std::cout << n*(n+1)/2 - sum;

    return 0;
}