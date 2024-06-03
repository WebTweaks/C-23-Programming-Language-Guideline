#include <iostream>

int main()
{
    int bag_of_values[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // This is a collection of integers

    std::cout << "==============================" << std::endl;
    //*The variable value will be assigned a value from the values array on each iteration
    //*value holds a copy of the current iteration in the whole bag
    for (int value : bag_of_values)
    {
        std::cout << " value : " << value << std::endl;
    }

    std::cout << "==============================" << std::endl;
    //*Specify the collection in place
    for (int value : {11, 12, 13, 14, 15, 16, 17, 18, 19, 20})
    {
        std::cout << " value : " << value << std::endl;
    }

    std::cout << "==============================" << std::endl;
    //*Auto type deduction
    for (auto value : {21, 22, 23, 24, 25, 26, 27, 28, 29, 30})
    {
        std::cout << " value : " << value << std::endl;
    }
    std::cout << "==============================" << std::endl;

    return 0;
}