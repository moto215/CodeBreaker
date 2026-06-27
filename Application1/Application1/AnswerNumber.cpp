#include "AnswerNumber.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>

void AnswerNumber::Random()
{
	// deleteするように気を付ける(sharedを使ってもよさそう)
	randomNum_ = new int(rand() % 10);
	// 答えの数字を出力
	std::cout << *randomNum_ << std::endl;
}