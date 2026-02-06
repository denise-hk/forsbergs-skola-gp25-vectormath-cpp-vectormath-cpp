// VectorMathematics Tests.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "VectorMath.h"


int main()
{
    Vec3 a = { 1.0f, 2.0f, 3.0f };
    Vec3 b = { 4.0f, 5.0f, 6.0f };

    Vec3 result = VectorAdd(a, b);
    std::cout << "Result: (" << result.x << ", "
        << result.y << ", " << result.z << ")\n";

    float mag = VectorMagnitude(a);
    std::cout << "Magnitude of a: " << mag << "\n";

    std::cout << "\nPress Enter to exit..." << std::endl;
    std::cin.get();  // Keeps window open

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
