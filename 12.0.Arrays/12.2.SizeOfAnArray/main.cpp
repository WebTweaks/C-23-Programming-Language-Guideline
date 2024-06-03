#include <iostream>

int main()
{
    int scores[]{1, 2, 5};
    int count{std::size(scores)};

    std::cout << "sizeof(scores) : " << sizeof(scores) << std::endl;
    std::cout << "sizeof(scores[0]) : " << sizeof(scores[0]) << std::endl;
    std::cout << "count : " << count << std::endl;

    int Count{sizeof(scores) / sizeof(scores[0])};

    for (size_t i{0}; i < Count; ++i)
    {
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    }

    // *Range based for loop
    int numbers[]{34, 545, 1, 43, 63, 54, 12};
    int counts{};
    for (auto i : numbers)
    {
        ++counts;
    }
    std::cout << "Total numbers: " << counts << std::endl;
    return 0;
}