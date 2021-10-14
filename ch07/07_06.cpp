#include <iostream>

namespace A_RANGE
{
	int score = 100;
	int TEST(const int s)
	{
		return s / 10;
	}
}

int main()
{
	int score = 90;

	std::cout << "score = " << score << std::endl;
	std::cout << "score = " << A_RANGE::score << std::endl;
	score = A_RANGE::TEST(score);
	std::cout << "score = " << score << std::endl;

	return 0;
}