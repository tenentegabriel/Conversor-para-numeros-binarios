#include <iostream>
#include <math.h>

int main() {
	int number1;
	
	while (true)
	{
		std::cout << "Digite Um Numero: ";
		std::cin >> number1;
		int Result = number1 / 2;
		int a = number1 % 2;
		std::cout << Result << std::endl << std::endl;
		std::cout << a << std::endl << std::endl;
	}

	

	system("pause");

	return 0;
}