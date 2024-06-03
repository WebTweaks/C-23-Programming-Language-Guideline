#include <iostream>

int main()
{

    // *Braced initializers

    int elephant_count; // Variable may contain random garbage value . WARNING
    int lion_count{};   // Initializes to zero
    int dog_count{10};  // Initializes to 10
    int cat_count{15};  // Initializes to 15

    // Can use expression as initializer
    int domesticated_animals{dog_count + cat_count};

    // int narrowing_conversion {2.9};//Compiler error

    std::cout << "Elephant count : " << elephant_count << std::endl;
    std::cout << "Lion count : " << lion_count << std::endl;
    std::cout << "Dog count : " << dog_count << std::endl;
    std::cout << "Cat count : " << cat_count << std::endl;
    std::cout << "Domesticated animal count : " << domesticated_animals << std::endl;

    return 0;
}
