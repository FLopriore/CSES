#include <iostream>

int main() {
	long long int n;
	std::cin >> n;
	std::cout << n << " ";
	while (n > 1)
	{
		if (n & 1)
			n = (3 * n) + 1;
		else
			n >>= 1;
		std::cout << n << " ";
	}
	return 0;
}