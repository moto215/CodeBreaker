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

	AnswerNumber answerNum;
	InputNumber inputNum;

	// ランダム値の生成
	answerNum.Random();

	// 入力値の保持
	inputNum.Input();

	Comparison comparison;

	// 結果の比較
	comparison.Comp(answerNum.randomNum_, inputNum.inputNum_);
}