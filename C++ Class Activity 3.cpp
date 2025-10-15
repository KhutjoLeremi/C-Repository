// C++ Class Activity 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
// A program to receive the number of males and females in a class and output the percentage
// Programmer : Khutjo Leremi
// Date : 15/10/2025


#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
void ClassPercentage(int numMales, int numFemales)
{
	int totalStudents = numMales + numFemales;
	double malePercentage = (static_cast<double>(numMales) / totalStudents) * 100;
	double femalePercentage = (static_cast<double>(numFemales) / totalStudents) * 100;
	std::cout << "The total number of student in the class " << totalStudents << std::endl;
	std::cout << "The percentage of males in the class is " << malePercentage << "%" << std::endl;
	std::cout << "The percentage of females in the class is " << femalePercentage << "%" << std::endl;
}
int main()
{
	int numMales, numFemales;
	std::cout << "Please enter the number of Males in the class " << std::endl;
	std::cin >> numMales;
	std::cout << "Please enter the number of Females in the class " << std::endl;
	std::cin >> numFemales;
	ClassPercentage(numMales, numFemales);
	std::cout << "END of Calculations, Thanks !\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
