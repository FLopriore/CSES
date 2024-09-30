#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::string sequence; std::cin >> sequence;

    int max_length = 1;
    int length = 1;
    char prev = *sequence.begin();
    for (auto it = sequence.begin()+1; it != sequence.end(); ++it) {
        if (*it == prev) {
            ++length;
        } else {
            length = 1;
            prev = *it;
        }
        max_length = std::max(length, max_length);
    }

    std::cout << max_length;
}