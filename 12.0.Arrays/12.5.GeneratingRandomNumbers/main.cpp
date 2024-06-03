#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

int main()
{
    std::srand(std::time(0)); // Seed

    int random_num = std::rand();

    std::cout << "==================================" << std::endl;
    std::cout << "random_num : " << random_num << std::endl; // 0 ~ RAND_MAX

    random_num = std::rand();
    std::cout << "random_num : " << random_num << std::endl; // 0 ~ RAND_MAX
    std::cout << "==================================" << std::endl;

    // *Generate random numbers in a loop
    for (size_t i{0}; i < 20; ++i)
    {
        random_num = std::rand();
        std::cout << "random_num " << std::setw(2) << i << ": " << random_num << std::endl; // 0 ~ RAND_MAX
    }
    std::cout << "==================================" << std::endl;

    // *Generate a range between 0 and 10
    std::cout << "random[0~10]" << std::endl;

    for (size_t i{0}; i < 20; ++i)
    {
        random_num = std::rand() % 11;
        std::cout << "random_num " << std::setw(2) << i << "  :   " << random_num << std::endl; // 0 ~ RAND_MAX
    }
    std::cout << "==================================" << std::endl;

    std::cout << "random[5~20]" << std::endl;
    for (size_t i{0}; i < 20; ++i)
    {
        random_num = std::rand() % 16 + 5;
        std::cout << "random_num " << i << "  :   " << random_num << std::endl; // 0 ~ RAND_MAX
    }
    std::cout << "==================================" << std::endl;

    return 0;
}