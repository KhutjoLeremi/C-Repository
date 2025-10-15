// C++ Class Activity 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// A program that calculates salary of worked hour per rate
//

#include <iostream>
#include <string>

void CalSalary(double rate, double hours, std::string name )
{
    double salary;
    salary = rate * hours;
    std::cout <<"Employee " <<name << " worked " <<hours <<" hours" <<" at a rate of "<<rate<< std::endl;
    std::cout << "Employee " << name << " total salary is " << salary << std::endl;

}
int main()
{
    double rate, hours;
    std::string name;
    std::cout << "Please enter Employee name" << std::endl;
    std::cin >> name;
    std::cout << "Please enter the rate per hour of employee" << std::endl;
    std::cin >> rate;
    std::cout << "Please enter the hours the employee worked" << std::endl;
    std::cin >> hours;
    CalSalary(rate, hours, name);

    std::cout << "Thanks, End of Calculation!\n";
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
