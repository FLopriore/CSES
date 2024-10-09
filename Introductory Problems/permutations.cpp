#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);

    int n; std::cin >> n;

    if (n == 1) {
        std::cout << n << '\n';
        return 0;
    }

    if (n == 2 || n == 3) {
        std::cout << "NO SOLUTION\n";
        return 0;
    }

    std::vector<int> even_v;
    even_v.reserve(n/2);
    std::vector<int> odd_v;
    odd_v.reserve(n/2);

    for (int i=1; i<=n; ++i) {
        if (i % 2 == 0) even_v.push_back(i);
        else odd_v.push_back(i);
    }

    for (auto e:even_v) {
        std::cout << e << ' ';
    }
    for (auto o:odd_v) {
        std::cout << o << ' ';
    }
    std::cout << "\n";
}