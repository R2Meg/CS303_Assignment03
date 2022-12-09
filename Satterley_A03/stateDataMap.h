#pragma once
//Meghan Satterley
//Fall 2022
//Assignment 03 (5)

#ifndef STATEDATAMAP_H
#define STATEDATAMAP_H

#include <iostream>
#include <string>
#include <map>

using namespace std;

//Code to output stored data
void print_map(map < string, string > stateDataMap) 
{
	for (map < string, string > ::iterator it = stateDataMap.begin();
		it != stateDataMap.end(); it++)
	{
		cout << "State: " << it->first << ", Capital: " << it->second << endl;
	}
}

//Output capital by state
void print_capital(map < string, string > stateDataMap, string state) 
{
	map < string, string > ::iterator it = stateDataMap.find(state);

	if (it == stateDataMap.end())
	{
		cout << state << " is not found" << endl;
	}
	else
	{
		cout << "Capital of " << state << " is " << it->second << endl;
	}
}

#endif