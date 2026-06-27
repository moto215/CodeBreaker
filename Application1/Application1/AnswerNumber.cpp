#include "AnswerNumber.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>

void AnswerNumber::Random()
{
	for (int i = 0; i < std::size(randomNum_); i++) 
	{
		// deleteするように気を付ける(sharedを使ってもよさそう)
		randomNum_[i] = new int(rand() % 10);
		// 答えの数字を出力
		std::cout << *randomNum_[i] << std::endl;
	}
}