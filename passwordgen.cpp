

#include "passwordgen.h"
#include <random>
#include <iostream>

#include <ctime>

using namespace std;

int main()
{
	system("title Password Gen");
	system("color 0a");
	cout << "Random Password Gen" << endl;
	cout << "There's only number passwords." << endl;
	srand(time(nullptr));
	std::cout << rand() << std::endl;
	system("pause");
	return 0;
}