#include <iostream>
#include <string>
#include <algorithm>

void comma2blank(char* textToChange) 
{
	if (*textToChange == ',')
	{
		*textToChange = ' ';
	}
}

int main()
{
	
	//Declare string pointer and string value
	std::string* pS = new std::string;
	*pS = "";

	//ask user for input
	std::cout << "Please input a line of text. Instead of spaces, please use commas: " << std::endl;

	//get user input. Store in pS value
	std::getline(std::cin, *pS);

	//for each over the given string with comma2blank

	for (int i = 0; i <= ((*pS).length() - 1); i++)
	{
		comma2blank( &pS->at(i) );
	}
	

	//d::for_each(*pS->begin(), *pS->end(), comma2blank);

	//output altered text
	std::cout << "The altered text is: " << *pS << std::endl;

	//pause for input
	std::cin.get();
	
}