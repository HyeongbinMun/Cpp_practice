#include <iostream>

int main() {
	int num;
	std::cout << "�� ���� ���Ͻʴϱ�? ";
	std::cin >> num;
	if (num < 10) {
		for (int i = 1; i <= 9; i++) {
				std::cout << num << "*" << i << "=" << num*i << std::endl;
			}
	}else
		std::cout << "9�ܱ����ۿ� ����� �ȵ˴ϴ�.\n";

	return 0;
}