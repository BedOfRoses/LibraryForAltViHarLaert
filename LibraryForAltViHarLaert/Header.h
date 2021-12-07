#pragma once
#include <iostream>
#include <string>	//	For getline. kan skrive getline(std::cin, variabel); 
					//	For å få hele linja med text
#include <Windows.h>//For Sleep(hvor mange ms);
#include <conio.h>	// for _getch(), som tar første bokstav trykket inn
#include <vector>	// for std::vector <datatype> navn (størrelse, hvilken verdi/tall inni)
					//kan bruke std::vector<std::vector<datatype>> navn {{}}; for å få 2d vector
	
#include <ctime>
#include <algorithm> // for std::shuffle (begin, end)
#include <fstream> // for files
std::fstream navn;

int heltall = 10;
char bokstav = 'C';
std::string setning = "setning"; //består av flere char's og er basically et char array
float decimals = 2.0;
double fleredecimals = 2.00000;
bool sant = true; //kan være true eller false, eller 1 og 0;

//Et 1d array
//5 elementer
char mittArray[5]{ '2','3','4','1','x' };

//2d array
//Blir 5x5
char TwoD[5][5] = { 
	{'x','x','x', 'x', 'x'},
	{'x','x','x', 'x', 'x'},
	{'x','x','x', 'x', 'x'},
	{'x','x','x', 'x', 'x'},
	{'x','x','x', 'x', 'x'}
};

void printTwoD() 
{
		std::cout << "-----------" << std::endl;
	for (int col = 0; col < 5; col++)
	{
		for (int row = 0; row < 5; row++)
		{
			std::cout << '|' << TwoD[col][row];
		}
		std::cout << '|';
		std::cout << '\n';
	}
		std::cout << "-----------" << std::endl;
	

}

struct MyStruct
{
	// Hoved forskjellen med struct og class, er at struct er public by defualt, mens class er private
};



class MyClass
{
public:
	MyClass();
	~MyClass();

	//	Funksjona inni her kalles methods
	//	Trenger ikke å legge paramaters i funksjonene siden de har innebygd ting fra 
	//	

	//f.eks
	int health{};
	char initial{};
	void enFunksjon()
	{
		std::cout << initial << " has: " << health << " left.." << std::endl;
	}

private:

};

MyClass::MyClass() //Constructor, kan lage egen cpp fil for classen
{
}

MyClass::~MyClass() //Destructor, slette objektet
{
}