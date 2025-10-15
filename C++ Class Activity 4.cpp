// C++ Class Activity 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
// A program to calculate the net salary of an employee after deducting taxes and other contributions.
//
#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <algorithm>
#include <cmath>
#include <map>
void calculateNetSalary(double grossSalary, std::string name)
{
    const double taxRate = 0.235; // 23.5% tax
	double Calctax = grossSalary * taxRate; //Calculate tax based on gross salary
	double netSalary = grossSalary - Calctax; // Calculate net salary after tax deduction
	std::cout << "The gross salary of Employee "<<name << " is Gross Salary: " << grossSalary << std::endl;
	std::cout << "The calculated Tax payable by Employee " << name << " is : " << Calctax << std::endl;
	std::cout << "The Net Salary for Employee " << name << " is : " << netSalary << std::endl;
}
int main()
{
    double grossSalary;
    std::string name; // Correct declaration of the name variable
	std::cout << "Please enter the Employee : " << std::endl;
	std::cin >> name; // Input employee name
	std::cout << "Please the Employee Gross Salary: " << std::endl;
	std::cin >> grossSalary; // Input employee gross salary
	calculateNetSalary(grossSalary, name); // Call the function to calculate net salary
    std::cout << "END of Taxation and Net Salary Calculations!\n";
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
