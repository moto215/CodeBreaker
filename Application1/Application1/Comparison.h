#pragma once
#include "AnswerNumber.h"
#include "InputNumber.h"

class Comparison
{
public:
	// ”äŠr‚ğ‚·‚é
	void Comp(AnswerNumber answer, InputNumber input);

private:
	int answer_;
	int input_;

public:
	int hit;
	int blow;
};