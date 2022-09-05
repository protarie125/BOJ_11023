#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto sum = int{};
	cin >> sum;
	while (cin.good() && !cin.eof()) {
		auto x = int{};
		cin >> x;

		sum += x;
	}

	cout << sum;

	return 0;
}