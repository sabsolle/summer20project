#include<iostream>
#include<string>

using namespace std;

int main()
{	
	string name = " ";
	char birthday = "";



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
	cin >> birthday;

	switch (birthday) {
		case a: 
			break;
		case b:
			break;
		default: 
			break;

	}
	




	return 0;
}
