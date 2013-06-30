#include <iostream>
// A library to make use of the rand() and srand() functions.
#include <cstdlib>
// A library that contains definitions for time and time functions
#include <ctime>
using namespace std;

// ************* Start Function Prototypes ************* 

// Displays Main menu
void displayMain(int * x);
// Displays user selection.
void menuChoiceSelection(int x);
// Starts the game.
void startGame();
// Displays Game Rules.
void viewRules();
// View program credits
void viewCredits();
// Display current graph.
void displayGraph(int array[][9]);

// ************* End Function Prototypes ************* 

int main()
{
	// menuChoice chooses from 1-3 at the displayMain function.
	int menuChoice;

	// Two-Dimensional array to hold all the user input.
	int chartArray[9][9] = {
								{1, 2, 3, 4, 5, 6, 7, 8, 9},
								{1, 2, 3, 4, 5, 6, 7, 8, 9},
								{1, 2, 3, 4, 4, 6, 7, 8, 9},
								{1, 2, 3, 4, 5, 4, 7, 8, 9},
								{1, 2, 3, 4, 5, 6, 7, 8, 9},
								{1, 2, 3, 6, 6, 6, 7, 8, 9},
								{1, 2, 3, 4, 5, 6, 7, 8, 9},
								{1, 2, 3, 4, 5, 6, 7, 8, 9},
								{1, 2, 3, 4, 5, 6, 7, 8, 9}
							};
	// Loop the program until the user decides to quit.
	do 
	{
		// Display Graph
		//displayGraph(chartArray);

		// Display the main menu list, pass the argument by reference.
		displayMain(&menuChoice);

		// User has made a selection, pass the argument by value.
		menuChoiceSelection(menuChoice);

	} while (menuChoice >=1 && menuChoice <=3);

	// End of code.
	return 0;

}

// Displays Main menu
void displayMain(int * x)
{
	system("cls");
	cout << "Welcome to Sodoku project!" << endl
		 << "Description HERE........." << endl << endl
		 << "1.\t\tPlay" << endl
		 << "2.\t\tRules" << endl
		 << "3.\t\tCredits" << endl
		 << "(Other Keys)\tQuit" << endl << endl
		 << "Please make a your selection (1-3): ";
	cin >>  * x;
}
// Displays user selection.
void menuChoiceSelection(int x)
{
	switch(x)
	{
		case 1:
			startGame();
			break;
		case 2:
			viewRules();
			break;
		case 3:
			viewCredits();
			break;
		default :
			exit;
	}
	system("pause");
}

// Starts the game.
void startGame()
{
	system("cls");
	cout << "Play option is currently currently unavailable." << endl;
}
// Displays Game Rules.
void viewRules()
{
	system("cls");
	cout << "- Sudoku is played over a 9x9 grid, divided to 3x3 sub grids called \"regions\"" << endl
		 << "- Sudoku begins with some of the grid cells already filled with numbers" << endl
		 << "- The object of Sudoku is to fill the other empty cells with numbers between\n1 and 9 (1 number only in each cell) according the following guidelines:" << endl << endl
		 << "\t1. Number can appear only once on each row" << endl
		 << "\t2. Number can appear only once on each column" << endl
		 << "\t3. Number can appear only once on each region" << endl << endl;

}
// View program credits
void viewCredits()
{
	system("cls");
	cout << "Credits option is currently unavailable." << endl;
}
// Display current graph.
void displayGraph(int array[][9])
{
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



	// Display Col Letters
	cout << "   A B C    D E F    G H I " << endl << endl;

	// Rows
	for(int index1 = 0; index1 < 9; index1++)
	{
		// Display Row Numbers
		cout << (index1+1) << "  ";

		//Col
		for(int index2 = 0; index2 < 9; index2++)
		{
			cout << array[index1][index2] << " ";

			// Vertical Box Division
			if(index2 == 2 || index2 == 5 )
				cout << " | ";

		}
		cout << endl;

		// Horizontal Box Devision
		if(index1 == 2 || index1 == 5)
		{
			cout << "   -------+--------+------"
				 << endl;
		}
	}
	cout << endl;
}