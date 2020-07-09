#include<iostream>
#include<string>

using namespace std;

int main()
{	
	string name = " ";
	char input;
	bool redo = false;
	



	cout << "What is your name?" << endl;
	cin >> name;
	cout << "When is your birthday?" << endl;
	cout << "a) March 21 - April 21" << endl;
	cout << "b) April 20 - May 20" << endl;
	cout << "c) May 21 - June 20" << endl;
	cout << "d) June 21 - July 22" << endl;
	cout << "e) July 23 - August 22" << endl;
	cout << "f) August 23 - September 23" << endl;
	cout << "g) September 23 - October 22" << endl;
	cout << "h) October 23 - November 21" << endl;
	cout << "i) November 22 - December 21" << endl;
	cout << "j) December 22 - January 19" << endl;
	cout << "k) January 20 - February 18" << endl;
	cout << "l) February 19 - March 20" << endl;
	cin >> input;


	do {	
		switch (input) {
			case 'A':
			case 'a': 

				break;
			case 'B':
			case 'b': 

				break;
			case 'C':
			case 'c': 

				break;
			case 'D':
			case 'd': 

				break;
			case 'E':
			case 'e': 

				break;
			case 'F':
			case 'f': 

				break;
			case 'G':
			case 'g': 

				break;
			case 'H':
			case 'h': 

				break;
			case 'I':
			case 'i': 

				break;
			case 'J':
			case 'j': 

				break;
			case 'K':
			case 'k': 

				break;
			case 'L':
			case 'l': 

				break;
			
			default: 
				cout << "Please enter a valid option (Aa - Ll)" << endl;
				redo = true;
				break;

		}
	}
	while (redo == true);




	return 0;
}
