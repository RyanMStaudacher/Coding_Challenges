// My first C++ coding challenge.
// This challenge comes from https://www.cprogramming.com/complete/array.html

// -----------------------|CHALLENGE|-----------------------

//Array Challenge
//
//When completed, the following program should first fill in(by asking the user for input) and then list all the elements in an array:
//
//#include <_____>
//
//using namespace std;
//___ main()
//{
//    int array[8]___
//        for (int x = _; x < _; ___)
//            cin >> ______;
//    for (____; x < ____; ___)
//        cout << _____;
//    return __;
//    ____

// -----------------------|SOLUTION|-----------------------

#include <iostream>

using namespace std;

int main()
{
	int array[8];

	for (int x = 0; x < 8; x++)
	{
		std::cout << "Please enter another number into the array..." << std::endl;
		std::cin >> array[x];
	}

	std::cout << "Numbers have been entered. Now printing all elements of the array..." << std::endl;

	for (int x = 0; x < 8; x++)
	{
		std::cout << array[x] << std::endl;
	}

	system("PAUSE");

	return 0;
}