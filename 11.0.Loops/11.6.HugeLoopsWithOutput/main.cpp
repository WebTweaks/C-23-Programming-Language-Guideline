#include <iostream>

int main()
{
    size_t i{};
    for (; i < 100000; ++i)
    {
        ++i;
    }
    std::cout << "For loop Done!" << std::endl;
    std::cout << "i: " << i << std::endl;

    while (i)
    {
        --i;
    }
    std::cout << "While loop Done!" << std::endl;
    std::cout << "i: " << i << std::endl;

    return 0;
}