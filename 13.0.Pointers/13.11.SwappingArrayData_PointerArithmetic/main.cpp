#include <iostream>

int main()
{
    int class1[]{10, 11, 12, 13, 14, 15, 16, 17, 18};
    int class2[]{20, 21, 22, 23, 24, 25, 26, 27, 28};

    std::cout << "\nBefore swapping data:" << std::endl;
    // class1
    for (size_t i = 0; i < std::size(class1); i++)
    {
        std::cout << "class1[" << i << "]: " << class1[i] << std::endl;
    }
    std::cout << std::endl;
    // class2
    for (size_t i = 0; i < std::size(class2); i++)
    {
        std::cout << "class2[" << i << "]: " << class2[i] << std::endl;
    }
    std::cout << std::endl;

    int *ptr1{class1};
    int *ptr2{class2};
    for (size_t i = 0; i < std::size(class1); i++)
    {
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        ptr1++;
        ptr2++;
    }
    
    std::cout << "After swapping data:" << std::endl;
    // class1
    for (size_t i = 0; i < std::size(class1); i++)
    {
        std::cout << "class1[" << i << "]: " << class1[i] << std::endl;
    }
    std::cout << std::endl;
    // class2
    for (size_t i = 0; i < std::size(class2); i++)
    {
        std::cout << "class2[" << i << "]: " << class2[i] << std::endl;
    }

    std::cout << std::endl;

    return 0;
}