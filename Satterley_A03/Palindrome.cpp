// Meghan Satterley
// Fall 2022
// Assingment 03 (2)

#include <iostream>
#include <cstring>

#include "Palindrome.h"

using namespace std;

int main(int argc, char *argv[])
{
	if (argc < 2 || (argc == 2 && argv[1][0] == '-'))
	{
		cout << "\nUsage: ./palindrome[-c][-s] string ..." << endl;
		cout << "-c: case sensitivity turn on" << endl;
		cout << "-s: ignoring spaces turned off" << endl << endl;
	}

	int i = 0;

	bool c = true, s = true;

	for (i = 1; i < argc; i++)
	{
		if (argv[i][0] == '-')
		{
			if (strlen(argv[i]) == 2)
			{
				if (argv[i][1] == 's' || argv[i][1] == 'S')
					s = false;

				else
					if (argv[i][1] == 'c' || argv[i][1] == 'C')
						c = false;
			}
			else
			{
				if (argv[i][1] == 's' || argv[i][1] == 'S' || argv[i][2] == 's' || argv[i][2] == 'S')
					s = false;

				if (argv[i][1] == 'c' || argv[i][1] == 'C' || argv[i][2] == 'c' || argv[i][2] == 'C')
					c = false;
			}
		}

		else
		{
			if (isPalindrome(argv[i], c, s))

				cout << "\"" << argv[i] << "\" is a palindrome." << endl;
			else

				cout << "\"" << argv[i] << "\" is not a palindrome." << endl;
		}
	}
}
