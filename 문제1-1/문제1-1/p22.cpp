#include <iostream>

int main() {
	int num;
	std::cout << "몇 단을 원하십니까? ";
	std::cin >> num;
	if (num < 10) {
		for (int i = 1; i <= 9; i++) {
				std::cout << num << "*" << i << "=" << num*i << std::endl;
			}
	}else
		std::cout << "9단까지밖에 계산이 안됩니다.\n";

	return 0;
}