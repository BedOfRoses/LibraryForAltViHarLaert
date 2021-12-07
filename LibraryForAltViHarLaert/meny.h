//#pragma once
//#include <iostream>
//#include <string>
//#include <conio.h>
//
//
//
//void printMenu();
//void playerMovement();
//void player();
//void copytable(); 
//
//int row = { 0 };
//int col = { 0 };
//
//
//char menu[4][2]{
//
//	{' ','1'},
//	{' ','2'},
//	{' ','3'},
//	{' ','4'},
//
//};
//
//int ypos{};
//
//void example1() { std::cout << "Hello"; }
//void example2() { std::cout << "2 + 2" << 2+2; }
//void example3() { std::cout << "Yerr a cæn't"; }
//
//char selection = '>';
//void printMenu() {
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			std::cout << '|' << menu[i][j];
//		}
//		std::cout << std::endl;
//
//	}
//
//}
//
//void move() {
//
//	char input{};
//	input = _getch();
//	switch (input)
//	{
//	case 'w': case 'W':
//		ypos += 1;
//		break;
//	case 's': case 'S':
//		ypos -= 1;
//		break;
//	default:
//		break;
//	}
//
//}
//
//void printSelectionMarker()
//{
//	menu[ypos][0] = selection;
//}
//
//void usingMenu()
//{
//	//Spawn selection
//	menu[0][0] = selection;
//
//	while(true)
//	{
//		system("cls");
//		printSelectionMarker();
//		printMenu();
//		move();
//		
//		
//	}
//
//
//	
//}
