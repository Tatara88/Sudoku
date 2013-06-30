#include <iostream>
using namespace std;

// Function Prototypes
void displayMain();
void viewRules();
void displayGraph(int array[9][9]);
int menuChoiceValidation(int x);

int main()
{
	//menuChoice user selection variable.
	int menuChoice;

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
	int chartArray[9][9] = {
							{1, 2, 3, 4, 5, 6, 7, 8, 9},
							{1, 2, 3, 4, 5, 6, 7, 8, 9},
							{1, 2, 3, 4, 5, 6, 7, 8, 9},
							{1, 2, 3, 4, 5, 6, 7, 8, 9},
							{1, 2, 3, 4, 5, 6, 7, 8, 9},
							{1, 2, 3, 4, 5, 6, 7, 8, 9},
							{1, 2, 3, 4, 5, 6, 7, 8, 9},
							{1, 2, 3, 4, 5, 6, 7, 8, 9},
							{1, 2, 3, 4, 5, 6, 7, 8, 9}
	};

	/*
	// TESTING ROW ONLY

				row|col
				[0][0]
	cout << "TESTING ARRAY ROW START" << endl;
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
	cout << "TESTING ARRAY ROW END" << endl;

	// TESTING COL ONLY
	cout << "TESTING ARRAY COL START" << endl;
	chartArray	[0][0] = 1;
	chartArray	[0][1] = 2;
	chartArray	[0][2] = 3;

	chartArray	[0][3] = 4;
	chartArray	[0][4] = 5;
	chartArray	[0][5] = 6;

	chartArray	[0][6] = 7;
	chartArray	[0][7] = 8;
	chartArray	[0][8] = 9;

	for(int index = 0;index < 9;index++)
	{
		cout << chartArray[0][index] << endl;
	}

	cout << "TESTING ARRAY COL END" << endl;

	*/
	displayGraph(chartArray);
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

	row|col
	[0][0]

	*/

	//Rows
	for(int index1 = 0; index1 < 9; index1++)
	{
		//Col
		for(int index2 = 0; index2 < 9; index2++)
		{
			cout << array[index1][index2] << " ";
		}
		cout << endl;
	}
}