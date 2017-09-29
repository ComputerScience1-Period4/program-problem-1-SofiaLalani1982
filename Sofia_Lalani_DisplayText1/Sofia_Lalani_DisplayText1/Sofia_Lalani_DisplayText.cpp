/*
Sofia Lalani- Spetember 21st, 2017 4th Period
Display Text
Introduction to C++ Visual Studios
Printing out statements to console from code
*/

//Libraries
#include <iostream> // cout, cin, endl, <<, >> 
#include <conio.h> // pause() fun access to to _getch() and _kbhit() 
// Namespaces
using namespace std; 

// Functions
void pause() {
	cout << "Press any key to continue...";
	while (!_kbhit()); 
	_getch();
	cout << '/n';
}
//MAIN
void main() {
	char Sofia = '4'; 

		// Display Text "Hello World"
		cout << "Sofia Lalani" << endl;
		cout << Sofia << endl; 
		cout << "Hello World" << endl; 
	pause();// pause() so we can see the text
	return; // ends program 
} 