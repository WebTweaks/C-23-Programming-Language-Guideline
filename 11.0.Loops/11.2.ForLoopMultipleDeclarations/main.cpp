#include <iostream>

int main()
{
    for (size_t i{0}, x{10}, y{55}; i < 10; ++i, x += 5, y -= 5)
    {
        std::cout << "i: " << i << "    x : " << x << "    y : " << y << std::endl;
    }

    return 0;
}