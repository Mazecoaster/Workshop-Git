#include <iostream>

int addValues(int a, int b)
{
    return a + b;
}

int main()
{
    std::cout << "Hello World!\n";
    std::cout << "My name is {Colin Gallagher}!\n";
    std::cout << "Today is {2/23/24}!\n";


    int a = 212;
    int b = 129;
    std::cout << "Adding these numbers equals... " << addValues(a, b) << "\n";
}
