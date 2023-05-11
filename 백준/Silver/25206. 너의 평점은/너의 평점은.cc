#include <iostream>
#include <string>

int main()
{
    std::string s;
	double score;
	std::string grade;
	double sum = 0.0, totalScore = 0.0;

	for (int i = 0; i < 20; i++)
	{
		std::cin >> s;
		std::cin >> score;
		std::cin >> grade;

		if (grade == "A+")
			sum += (score * 4.5);
		else if (grade == "A0")
			sum += (score * 4.0);
		else if (grade == "B+")
			sum += (score * 3.5);
		else if (grade == "B0")
			sum += (score * 3.0);
		else if (grade == "C+")
			sum += (score * 2.5);
		else if (grade == "C0")
			sum += (score * 2.0);
		else if (grade == "D+")
			sum += (score * 1.5);
		else if (grade == "D0")
			sum += (score * 1.0);
		else if (grade == "F")
			sum += (score * 0.0);
		else if (grade == "P")
			continue;

		totalScore += score;
	}

	std::cout.setf(std::ios::fixed);
	std::cout.precision(6);
	std::cout << sum / totalScore << std::endl;

	return 0;
}