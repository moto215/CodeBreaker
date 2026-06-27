#include "Comparison.h"
#include <iostream>

void Comparison::Comp(int* answer[], int* input[])
{
	// 結果の比較
	for (int i = 0; i < 4; i++)
	{
		for (int k = 0; k < 4; k++)
		{
			if (*answer[i] == *input[k])
			{
				if (i == k)
				{
					std::cout << "ヒット" << std::endl;
					//delete input[k];
					//input[k] = nullptr;
					*input[k] = 10;
					hit++;
					break;
				}
				else 
				{
					// blow の処理
					std::cout << "ブロー" << std::endl;
				}
			}
		}
	}
}