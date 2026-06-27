#include <iostream>
#include "AnswerNumber.h"
#include "InputNumber.h"
#include "Comparison.h"

struct Result
{

};

int main()
{
	srand((unsigned int)time(NULL));

	AnswerNumber answerNum[4];
	InputNumber inputNum[4];

	// ランダム値の生成
	for (int i = 0; i < std::size(answerNum); i++) 
	{
		answerNum[i].Random();
	}
	// 入力値の保持
	for (int i = 0; i < std::size(inputNum); i++)
	{
		inputNum[i].Input();
	}

	Comparison comparison;

	// 結果の比較
	for (int i = 0; i < 4; i++)
	{
		for (int k = 0; k < 4; k++)
		{
			comparison.Comp(answerNum[i], inputNum[k]);
		}
	}
}