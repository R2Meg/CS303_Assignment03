//Meghan Satterley
//Fall 2022
//Assignment 03 (5)

#include <iostream>
#include <string>
#include <map>

#include "stateDataMap.h"

using namespace std;

int main()
{
	map < string, string > stateDataMap;  //input (state,Capital) data

	stateDataMap["Nebraska"]      = "Lincoln";
	stateDataMap["New York"]      = "Albany";
	stateDataMap["Ohio"]	      = "Columbus";
	stateDataMap["California"]    = "Sacramento";
	stateDataMap["Massachusetts"] = "Boston";
	stateDataMap["Texas"]         = "Austin";

	print_map(stateDataMap); // outputs stored data

	stateDataMap["California"] = "Los Angeles";

		cout << "\nCapital of California updated to Los Angeles: \n" << endl;

		print_map(stateDataMap);

	string state;  // outputs capital of user entered state
		
		cout << "\nEnter State: ";

		getline(cin, state);
		
		print_capital(stateDataMap, state);

		return 0;
}