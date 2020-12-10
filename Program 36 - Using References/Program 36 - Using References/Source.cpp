#include <iostream>

void plus25(int& num)
{
	num += 25;
}

void minus25(int& num)
{
	num -= 25;
}

int main()
{
	//Declare necessary variables
	int num;
	int& rNum = num;
	//Ask user for a value to assign to num
	std::cout << "Please input an integer to assign to num: " << std::endl;
	std::cin >> num;
	std::cout << "num is currently: " << num << std::endl;
	//Add25
	plus25(rNum);
	std::cout << "25 added. num is currently: " << num << std::endl;
	//Ask user for another num
	std::cout << "Please input an integer to assign to num: " << std::endl;
	std::cin >> num;
	std::cout << "num is currently: " << num << std::endl;
	//Minus25 from num.
	minus25(rNum);
	std::cout << "25 subtracted. num is currently: " << num << std::endl;

	std::cin.get();

	return 0;
}