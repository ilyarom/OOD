// Figures.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Controller.h"
#include "Shape.h"

int main()
{
	std::ifstream input("input.txt");
	std::ofstream output("output.txt");
	CController controle(input, output);
	controle.Handle();
    return 0;
}

