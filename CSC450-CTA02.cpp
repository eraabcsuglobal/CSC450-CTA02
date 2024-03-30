/* Name: Evan Raab
 * Project Name: CSC450-CTA02 - String Input Console Application
 * Project Purpose: Take two strings inputs and concatenate the strings
 * Algorithm Used: In a for loop, take two user string inputs, copy them in char arrays, then concatenate the char arrays. Finish by printing the new string
 * Program Inputs: String userInputOne, String userInputTwo
 * Program Outputs: Strings userInputOne, userInputTwo as single string
 * Program Errors: None
*/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main () {

	// perform string String Input Console Application 3 times
	for (int i = 0; i < 3; i++)
	{
		// data fields for strings
		std::string userInputOne;
		std::string userInputTwo;

		// prompt user to enter two strings
		std::cout << "Please enter text: ";
		std::getline(std::cin, userInputOne);
		std::cout << "Enter another sentence or word: ";
		std::getline(std::cin, userInputTwo);

		// convert string to char in order to allow concatenate method
		char charInputOne[userInputOne.size() + 1];
		strcpy(charInputOne, userInputOne.c_str());

		char charInputTwo[userInputTwo.size() + 1];
		strcpy(charInputTwo, userInputTwo.c_str());

		// concatenate the two strings
		strcat(charInputOne, charInputTwo);
		// print the resulting output to the screen
		cout <<"Both strings combined: " << charInputOne <<endl;

	}

}

