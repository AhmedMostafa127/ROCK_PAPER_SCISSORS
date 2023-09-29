#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// s is denoting Stone , p is denoting Paper , x is denoting Paper
// user win 1 , user lose 0 , draw -1
int game(char you, char computer)
{
	// 2 players choose the same thing
	if (you == computer || (you=='S' && computer=='s') || (you=='P' && computer=='p') || (you=='X' && computer=='x'))
		return -1;

	// If user's choice is stone and computer's choice is paper
	if ((you == 's' && computer == 'p')  ||(you == 'S' && computer == 'p') )
		{return 0;}

    // If user's choice is paper andcomputer's choice is stone
    else if ((you == 'p' && computer == 's') || (you == 'P' && computer == 's'))
        {return 1;}

	// If user's choice is stone and computer's choice is scissor
	if ((you == 's' && computer == 'x') || (you == 'S' && computer == 'x'))
		{return 1;}

	// If user's choice is scissor and computer's choice is stone
	else if ((you == 'x' && computer == 's') || (you == 'X' && computer == 's') )
		{return 0;}

	// If user's choice is paper and computer's choice is scissor
	if ((you == 'p' && computer == 'x') || (you == 'P' && computer == 'x'))
		return 0;

	// If user's choice is scissor and computer's choice is paper
	else if ((you == 'x' && computer == 'p')|| (you == 'X' && computer == 'p'))
		return 1;
}

int main()
{

	int n; // Stores the random number

	char you, computer, result;

	// Chooses the random number to make computer choose s,r,x randomly
	srand(time(NULL));

	n = rand() % 100;

	if (n < 33)
		{computer = 's';}
	else if (n > 33 && n < 66)
		{computer = 'p';}
	else
		{computer = 'x';}

	printf("\n\n\n\n\t\t\t\tEnter s for STONE, p for PAPER and x for SCISSOR\n\t\t\t\t\t\t\t");

	scanf("%c", &you);

	result = game(you, computer);

	if (result == -1) {
		printf("\n\n\t\t\t\tGame Draw!\n");
	}
	else if (result == 1) {
		printf("\n\n\t\t\t\tWow! You have won the game!\n");
	}
	else {
		printf("\n\n\t\t\t\tOh! You have lost the game!\n");
	}
		printf("\t\t\t\tYou choose : %c and Computer choose : %c\n",you, computer);

	return 0;
}
