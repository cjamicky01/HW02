#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <new>
#include <cstddef>



void int_to_binary(int);

int main() {
	int inputNum;

	std::cout << "Please Enter the number to be converted: ";
	std::cin >> inputNum;
	
	std::cout << "The binary conversion of " << inputNum << " is "; 
	int_to_binary(inputNum);
	std::cout << std::endl;
}

void int_to_binary(int input) {
	if (input == 0) {
		return;
	}
	else {
		int_to_binary(input / 2);
		std::cout << (input % 2);
	}
}