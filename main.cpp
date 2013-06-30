#include <iostream>
using namespace std;

// Function Prototypes
void displayMain();
void viewRules();
int menuChoiceValidation(int x);

int main()
{
	//menuChoice user selection variable.
	int menuChoice;

	displayMain();
	cin >> menuChoice;


	system("pause");
	return 0;

}


// Displays Main menu
void displayMain()
{
	cout << "Welcome to Sodoku project!" << endl
		 << "Description HERE........." << endl << endl
		 << "1.\tPlay" << endl
		 << "2.\tRules" << endl
		 << "3.\tCredits" << endl
		 << "4.\tQuit" << endl << endl
		 << "Please make a your selection (1-4): ";
}
// Displays Game Rules
void viewRules()
{
	cout << "- Sudoku is played over a 9x9 grid, divided to 3x3 sub grids called \"regions\"" << endl
		 << "- Sudoku begins with some of the grid cells already filled with numbers" << endl
		 << "- The object of Sudoku is to fill the other empty cells with numbers between\n1 and 9 (1 number only in each cell) according the following guidelines:" << endl << endl
		 << "\t1. Number can appear only once on each row" << endl
		 << "\t2. Number can appear only once on each column" << endl
		 << "\t3. Number can appear only once on each region" << endl << endl;

}
//Validates menuChoice thats 1-4 and not a character.
int menuChoiceValidation(int x)
{
	
	return x;
}