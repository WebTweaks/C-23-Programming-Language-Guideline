#include <iostream>

int main()
{
    // int * data = new int[10000000000000000];

    /*for (size_t i{0}; i < 10000000; ++i)
    {
        int *data = new int[100000000];
    }*/

    // *exception
    for (size_t i{0}; i < 10; ++i)
    {
        try
        {
            int *data = {new int[1000000000]};
            std::cout << "Data allocated(exception)" << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    std::cout << '\n';

    // *std::nothrow
    for (size_t i{0}; i < 10; ++i)
    {

        int *data = new (std::nothrow) int[100000000];

        if (data != nullptr)
        {
            std::cout << "Data allocated(nothrow)" << std::endl;
        }
        else
        {
            std::cout << "Data allocation failed(nothrow)" << std::endl;
        }
    }

    std::cout << "\nProgram ending well" << std::endl;

    return 0;
}