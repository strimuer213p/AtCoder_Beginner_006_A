#include<iostream>

int main() {
	int n;
	std::cin >> n;
	n % 3 == 0 ? std::cout << "YES" << std::endl : std::cout << "NO" << std::endl;

	return 0;
}