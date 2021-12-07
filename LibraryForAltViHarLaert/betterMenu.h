#pragma once

#include <iostream>
#include <Windows.h>
#include <vector>
#include <string>
#include <time.h>
#include <conio.h> //for getch() function


void usingMenu();
void printMenu();
void playerMovement();// userMovement(); //Choosing arrow for menu
void player();//theUserArrow(); //spawns arrow
void copytable(); //copyMenu();

int row = { 0 };
int col = { 0 };

//Code from my github https://github.com/BedOfRoses/Weekly4/blob/master/Weekly4Part4/maincpp.cpp

std::string table[4][2] =
{
	{"    ", "Task .1"},
	{"    ", "Task .2"},
	{"    ", "Task .3"},
	{"    ", "Task .4"},

};
std::string Default[4][2] =
{
	{"    ", "Task .1"},
	{"    ", "Task .2"},
	{"    ", "Task .3"},
	{"    ", "Task .4"},

};







void usingMenu()
{
	std::string playerr = "--> |";
	table[col][row] = playerr; //SPAWNS ARROW


	while (true) {
		system("cls");	//clears screen
		printMenu();	//PRINTS the menu  
		playerMovement();		//LETS USER CHOOSE DIRECTION OF PLAYER
		copytable();		//PRINTS THE DEFAULT TABLE WHICH REMOVES ALL THE PREVIOUS MOVES or clears them
		player(); // the arrow


	}
}







void printMenu()
{
	for (int i{}; i < 4; i++) {

		for (int j{}; j < 2; j++)
		{
			if (j % 2 == 0) {
				std::cout << std::endl;
			}
			std::cout << table[i][j];
		}

	}
}

void copytable()
{
	for (int i{}; i < 4; i++)
	{
		for (int j{}; j < 2; j++)
		{

			table[i][j] = Default[i][j];
		}
	}
}

void playerMovement()	//userMovement()
{
	char userInput = _getch();



	switch (userInput)
	{
		

	case 'w': case 'W':	//	MOVE UP			<----
		col -= 1;

		break;

	case 's': case 'S':	//	MOVE DOWN		<----
		col += 1;
		break;

	case 13:
		if (col == 0) {
			system("cls");
			//Different tasks
			std::cout << "Shattap noob" << std::endl;
		}
		else if (col == 1) {
			system("cls");
			std::cout << "memes:.:::.:" << std::endl;
		}
		else if (col == 2) {
			system("cls");
			std::cout << "System restored." << std::endl;
		}

		break;

	default:
		break;
	};


}

void player()
{
	table[col][row] = { "--> |" };
}
