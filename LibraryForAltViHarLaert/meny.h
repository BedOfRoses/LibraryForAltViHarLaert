#pragma once
#include <iostream>
#include <string>
#include <conio.h>


char menu[4][2]{

	{' ','1'},
	{' ','2'},
	{' ','3'},
	{' ','4'},

};

int ypos{};

void example1() { std::cout << "Hello"; }
void example2() { std::cout << "2 + 2" << 2+2; }
void example3() { std::cout << "Yerr a cæn't"; }

char selection = '>';

void move() {

	char input{};
	input = _getch();
	switch (input)
	{
	case 'w': case 'W':
		ypos += 1;
		break;
	case 's': case 'S':
		ypos -= 1;
		break;
	default:
		break;
	}

}

void usingMenu()
{


	
}
