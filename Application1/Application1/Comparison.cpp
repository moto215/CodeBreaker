#include "Comparison.h"

void Comparison::Comp(int* answer, int* input)
{
	// Œ‹‰Ê‚Ì”äŠr
	for (int i = 0; i < 4; i++)
	{
		for (int k = 0; k < 4; k++)
		{
			if (*answer == *input)
			{
				if (i == k)
				{
					delete input;
					input = nullptr;
					hit++;
					break;
				}
				// blow ‚Ìˆ—
			}
		}
	}
}