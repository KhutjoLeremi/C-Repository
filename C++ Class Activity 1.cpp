// C++ Class Activity.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

float CalArea(float radius)
{
    float Pi = 3.14159; //Constant value 
    return Pi * radius * radius;
}

float CalCircum(float radius)
{
    float Pi = 3.14159; //Constant value 
    return 2 * Pi * radius;
}

int main()
{
    float r;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> r;
    // Call the function and store the result
    float circum = CalCircum(r);
    float Area = CalArea(r);
    std::cout << "The circumference of the circle is: " << circum << std::endl;
    std::cout << "The area of the circle is: " << Area << std::endl;
    return 0;
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
