#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);

    int n; std::cin >> n;

    long long int prev; std::cin >> prev;
    long long int move = 0;

    for (int i=1; i<n; ++i) {
        long long int x; std::cin >> x;
        if (x<prev) {
            move += prev-x;
            x = prev;
        }
        prev = x;
    }

    std::cout << move << std::endl;
}