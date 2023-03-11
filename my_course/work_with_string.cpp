#include <iostream>
#include <string>

int get_length() {

	std::string name;

	std::cout << "enter your name: ";
	std::getline(std::cin, name);  // takes a sentance

	std::cout << "hello " << name << std::endl;

	// check if string is empty
	if (name.empty()) {
		std::cout << "you never entered anything" << std::endl;
		return 0;
	}
	std::cout << "the length of your name is " << name.length() - 1 << std::endl;

	return 1;
	
}


/**
* @brief a simple print statement
*
* @param a, the input string
*
* @return 0
*
*/
int dl_print(std::string a) {

	std::cout << a;
	return 0;
}