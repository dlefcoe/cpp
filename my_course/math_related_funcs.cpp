

#include <iostream>
#include <cmath>

int math_related() {

	double x = 3;
	double y = 4;
	double z;

	// everything is here

	z = std::max(x, y);
	std::cout << "the max result is: " << z << std::endl;

	z = std::min(x, y);
	std::cout << "the min result is: " << z << std::endl;

	z = pow(2, 3);
	std::cout << "2 ^ 3 = " << z << std::endl;

	z = sqrt(9);
	std::cout << "sqrt(9)= " << z << std::endl;

	return 0;
}


/**
* @brief calculate the hypotenuse
* 
* @param a, the adjacent.
* @param b, the opposite.
*
* @return The hypotenuse
* 
*/
double hypotenuse_calc(double a, double b) {

	double c;

	c = sqrt(pow(a, 2) + pow(b, 2));
	return c;

}


int if_statements() {

	int age;
	std::cout << "enter your age: ";
	std::cin >> age;

	if (age > 100) {
			std::cout << "you are too old.";
	}
	else if (age >= 18){
		std::cout << "welcome to the site !";
	}
	else if (age < 0) {
		std::cout << "age needs to be a positive number.";
	}
	else{
		std::cout << "you are too young.";
	}


	return 0;
}


/*
* 
* switch is an alternative to using chained else if statements.
* 
*/
int switch_statement() {

	int month;
	std::cout << "enter the month (1-12): ";
	std::cin >> month;

	switch (month)
	{
	case 1:
		std::cout << "it is jan";
		break;
	case 2:
		std::cout << "it is feb";
		break;
	case 3:
		std::cout << "it is mar";
		break;
	case 4:
		std::cout << "it is apr";
		break;
	case 5:
		std::cout << "it is may";
		break;
	case 6:
		std::cout << "it is jun";
		break;
	default:
		std::cout << "it is the rest of the year";
		break;


	}

	return 0;
}


int ternary_operator() {
	int grade = 75;

	// condition ?   expression1		:    expression2   ;
	grade >= 50 ? std::cout << "you passed" : std::cout << "you failed";
	std::cout << std::endl;
	
	
	int number = 9;
	number % 2 == 1 ? 
		std::cout << "odd" : 
		std::cout << "even";
	
	return 0;

}

int logical_operators() {
	// && = logical AND
	// || = logical OR
	// !  = logical NOT
	//

	int temp;

	std::cout << "enter the temp: ";
	std::cin >> temp;

	// try the AND
	if (temp > 0 && temp < 30) {
		std::cout << "the temp is good" << std::endl;
	}
	else {
		std::cout << "the temp is bad" << std::endl;
	}

	// try the OR
	if (temp > 0 || temp < 30) {
		std::cout << "the temp is good" << std::endl;
	}
	else {
		std::cout << "the temp is bad" << std::endl;
	}

	// try the NOT OR (NOR)
	if ( !(temp > 0 || temp < 30) ) {
		std::cout << "the temp is good" << std::endl;
	}
	else {
		std::cout << "the temp is bad" << std::endl;
	}

	return 0;
}