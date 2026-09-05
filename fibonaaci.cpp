#include <iostream>
int main() {
	int terms;
	std::cout << "Enter the number of terms: ";
	std::cin >> terms;
	if (terms <= 0) {
		std::cout << "Please enter a positive number.\n";
		return 0;
	}
	long long first = 0;
	long long second = 1;

	for (int index = 0; index < terms; ++index) {
		std::cout << first;
		if (index < terms - 1) {
			std::cout << ' ';
		}
		long long next = first + second;
		first = second;
		second = next;
	}
	std::cout << '\n';
	return 0;
}