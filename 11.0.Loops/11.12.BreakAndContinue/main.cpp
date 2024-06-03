#include <iostream>

int main()
{
    // *break and continue : for loops
    const size_t COUNT{200};
    std::cout << "\nbreak and continue : for loops" << std::endl;

    for (size_t i{0}; i < COUNT; ++i)
    {

        if (i == 3)
            continue;

        if (i == 6)
            break; // Breaks out of the loop
        std::cout << "i : " << i << std::endl;
    }
    std::cout << "For Loop done!" << std::endl;

    std::cout << "=======================================";
    // *break and continue : while loop
    size_t i{0};

    std::cout << "\nbreak and continue : while loops" << std::endl;
    while (i < 20)
    {
        if (i == 3)
        {
            ++i;
            continue;
        }
        if (i == 6)
            break;
        std::cout << "i : " << i << std::endl;
        ++i;
    }
    std::cout << "While Loop done!" << std::endl;

    std::cout << "=======================================";
    // *break and continue : do while loop
    std::cout << "\nbreak and continue : do while loops" << std::endl;
    i= 0;

    do
    {
        if (i == 3)
        {
            ++i;
            continue;
        }
        if (i == 6)
            break;
        std::cout << "i : " << i << std::endl;
        ++i;
    } while (i < 20);
    std::cout << "Do While Loop done!" << std::endl;
    std::cout << std::endl;

    return 0;
}