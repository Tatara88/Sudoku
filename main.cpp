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
	int chartArray[9][9];

	// TESTING ONLY
	//			row|col
	chartArray	[0][0] = 1;
	chartArray	[1][0] = 2;
	chartArray	[2][0] = 3;

	chartArray	[3][0] = 4;
	chartArray	[4][0] = 5;
	chartArray	[5][0] = 6;

	chartArray	[6][0] = 7;
	chartArray	[7][0] = 8;
	chartArray	[8][0] = 9;

	for(int index = 0;index < 9;index++)
	{
		cout << chartArray[index][0] << endl;
	}

	/*
		
		A B C   D E F   G H I
	1	0 0 0 | 0 0 0 | 0 0 0
	2	0 0 0 | 0 0 0 | 0 0 0
	3	0 0 0 | 0 0 0 | 0 0 0
		------+-------+------
	4	0 0 0 | 0 0 0 | 0 0 0
	5	0 0 0 | 0 0 0 | 0 0 0
	6	0 0 0 | 0 0 0 | 0 0 0
		------+-------+------
	7	0 0 0 | 0 0 0 | 0 0 0
	8	0 0 0 | 0 0 0 | 0 0 0
	9	0 0 0 | 0 0 0 | 0 0 0

	*/
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
// Validates menuChoice thats 1-4 and not a character.
int menuChoiceValidation(int x)
{
	
	return x;
}