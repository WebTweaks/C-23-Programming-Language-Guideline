#include <iostream>

int global_var1{23}; // global variable

void some_function()
{
    int local_var{10};
    std::cout << "Inside function global_var : " << global_var1 << std::endl;
    std::cout << "Inside function local_var : " << local_var << std::endl;
}

int main()
{
    int local_var{145};
    std::cout << "Inside main function global_var : " << global_var1 << std::endl;
    std::cout << "Inside main function local_var : " << local_var << std::endl;
    some_function();

    return 0;
}