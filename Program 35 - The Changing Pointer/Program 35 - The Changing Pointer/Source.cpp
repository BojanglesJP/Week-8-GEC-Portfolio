#include <iostream>

void inputDetails(int* n1, int* n2)
{
	//Should ask the user for two integers and then populate num1 and num2 appropriately.
	std::cout << "Please input the first integer: " << std::endl;
	std::cin >> *n1;
	std::cout << "Please input the second integer: " << std::endl;
	std::cin >> *n2;
}

void outputDetails(int& integer1, int& integer2, int* pointer)
{
	//Should output the value and address of num1 & num2
	//Should output the value, dereferenced value, and address of pNum
	std::cout << "num1 value: " << integer1 << std::endl;
	std::cout << "num1 address: " << &integer1 << std::endl;
	std::cout << "num2 value: " << integer2 << std::endl;
	std::cout << "num2 address: " << &integer2 << std::endl;
	std::cout << "pNum value (currently held address): " << pointer << std::endl;
	std::cout << "pNum dereferenced value: " << *pointer << std::endl;
	std::cout << "pNum address in memory: " << &pointer << std::endl;
}

int main()
{
	//Declare necessary variables
	int num1, num2;
	int* pNum = &num1;
	//Assign num1 & num2
	inputDetails(&num1, &num2);
	//Output details
	outputDetails(num1, num2, pNum);
	//Reassign pNum to point at num2
	pNum = &num2;
	std::cout << "pNum has been reassigned to num2." << std::endl;
	//Display new details
	outputDetails(num1, num2, pNum);
	//Pause for input
	std::cin.get();
	//Delete pointer
	delete pNum;
	return 0;
}