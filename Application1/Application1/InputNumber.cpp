#include "InputNumber.h"
#include <iostream>

void InputNumber::Input()
{
	std::cout << "\n0`9‚Ì”Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢" << std::endl;
	scanf_s("%d", &inputNum_);
	std::cout << "“ü—Í‚³‚ê‚½”Žš:" << inputNum_ << std::endl;
}