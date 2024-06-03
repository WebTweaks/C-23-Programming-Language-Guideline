#include <iostream>

int main()
{
    int max{};
    int a{395};
    int b{207650};

    std::cout << "using regular if " << std::endl;

    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    std::cout << "max : " << max << std::endl;
    std::cout << "=========================" << std::endl;

    std::cout << "ternary operatoer " << std::endl;
    max = (a > b) ? a : b; // Ternary operator
    std::cout << "max : " << max << std::endl;

    return 0;
}