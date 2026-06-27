#include "InputNumber.h"
#include <iostream>

void InputNumber::Input()
{
	for (int i = 0; i < std::size(inputNum_); i++)
	{
		std::cout << "\n0`9‚Ì”Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢" << std::endl;
		scanf_s("%d", &input[i]);
		inputNum_[i] = &input[i];
		std::cout << "“ü—Í‚³‚ê‚½”Žš:" << inputNum_[i] << std::endl;
	}
}