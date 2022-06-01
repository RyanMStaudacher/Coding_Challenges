//Good morning!Here's your coding interview problem for today.
//
//This problem was recently asked by Google.
//
//Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
//
//For example, given[10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
//
//Bonus: Can you do this in one pass ?

//-----------------------[SOLUTION]-----------------------

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

bool CheckNumbers(std::vector<int> theNums, int desiredNum)
{
	for (int x = 0; x < theNums.size() - 1; x++)
	{
		for (int y = 0; y < theNums.size() - 1; y++)
		{
			if (x + y == desiredNum)
			{
				return true;
			}
		}
	}
}

int main()
{
	std::cout << "Please provide numbers for the list. \nEnter a number and hit enter to add it to the list. \nWhen you are done entering numbers, type 'done' without quotes or capitalization." << std::endl;

	std::string input;
	std::vector<int> numbers;
	std::stringstream ss;
	
	int newNum;
	int k;
	
	
	while (input != "done")
	{
		ss << input;
		ss >> newNum;
		numbers.emplace(numbers.begin(), newNum);
		ss.clear();
		std::cin >> input;
	}

	std::cout << "Thank you. Now input the desired number that the two elements should add up to(k)." << std::endl;
	std::cin >> k;

	if (CheckNumbers(numbers, k) == true)
	{
		std::cout << "Two elements from the list add up to your desired number!" << std::endl;
	}
	else
	{
		std::cout << "No two elements from the list add up to your desired number..." << std::endl;
	}

	system("PAUSE");
	return 0;
}