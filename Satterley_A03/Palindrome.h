#pragma once
// Meghan Satterley
// Fall 2022
// Assingment 03 (2)

#ifndef PALINDROME_H
#define PALINDROME_H

#include <iostream>
#include <string>

using namespace std;

bool isPalRec(char str[], int start, int end, bool c, bool s);

bool isPalindrome(char str[], bool c, bool s);

bool isPalRec(char str[], int start, int end, bool c, bool s)
{
	if (start == end)											// One character entries
		return true;

	if (c && toupper(str[start]) != toupper(str[end]))			// Check first and last char
	{
		if (s && !isalnum(str[start]))
		{
			return isPalRec(str, start + 1, end, c, s);
		}
		else
			if (s && !isalnum(str[end]))
			{
				return isPalRec(str, start, end - 1, c, s);
			}
			else
				return false;
	}
	else
		if (!c && str[start] != str[end])
			return false;

	if (start < end + 1)								// Check middle char
		return isPalRec(str, start + 1, end - 1, c, s);

	return true;
}

bool isPalindrome(char str[], bool c, bool s)
{
	int n = strlen(str);								// Empty string

	if (n == 0)
		return true;

	return isPalRec(str, 0, n - 1, c, s);
}


#endif
