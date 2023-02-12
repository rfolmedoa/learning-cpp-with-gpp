//One line comment
//This brings in the iostream library
#include <iostream>
#include <string> //For data inputs with spaces

//This is a function to add two integers
int addNumbers(int number1, int number2){
	int result = number1 + number2;
	return result;
}

//This function returns number 3
int get_value(){
	return 3;
}

/* 

	This is a block comment that englobes multiple
	lines of text

*/

int main(){

	//This is going to print "Hello i" to the console
	std::cout << "Hello 1" << std::endl;
	std::cout << "Hello 2" << std::endl;
	std::cout << "Hello 3" << std::endl;

	//Call the addNumbers function
	int number1 = 10; //Statement
	int number2 = 15;


	std::cout << "Number2 is: " << number2 << std::endl;
	std::cout << "Sum: " << number1 + number2 << std::endl;
	std::cout << "AddNumbers function for 8 and 7: " << addNumbers(8,7) << std::endl;

	//Data input with spaces
	std::string full_name;
	int age;

	std::cout << "Please type in your full name and age: " << std::endl;
	std::getline(std::cin,full_name);
	std::cin >> age;

	std::cout << "Hello " << full_name << " your age is " << age << std::endl;

	//Call get_value function
	int value3 = get_value();
	std::cout << "Return of get_value function: " << value3 << std::endl;


	return 0;
	//Program ends here.
}