#include <iostream>
#include <vector>

typedef long long int ll;


int main() {
    std::ios_base::sync_with_stdio(false);

    int n; std::cin >> n;

    std::vector<ll> elements(n, 0);

    for (int i=0; i<n; ++i) {
        int x; std::cin >> x;
        elements[i] = x;
    }

    std::sort(elements.begin(), elements.end());

    int i=1;
    int prev = elements[0];

    int n_diff = 1;
    while (i<n) {
        if (elements[i] != prev) {
            ++n_diff;
            prev = elements[i];
        }
        ++i;
    }

    std::cout << n_diff << "\n";
}