#include <iostream>

int main()
{
    // *Declare array
    char message[6]{"Hello"};

    std::cout << "\nmessage : " << message << std::endl;
    std::cout << "=================================" << std::endl;

    // *Print out the array through looping
    std::cout << "message : ";
    for (auto c : message)
    {
        std::cout << c;
    }
    std::cout << "\n=================================" << std::endl;

    // *Change characters in our array
    message[1] = 'a';

    // *Print out the array through looping
    std::cout << "message : ";
    for (auto c : message)
    {
        std::cout << c;
    }
    std::cout << "\n=================================" << std::endl;

    // *If a character array is null terminated, it's called as C-String
    char message1[]{'H', 'e', 'l', 'l', 'o', '\0'};
    std::cout << "message1 : " << message1 << std::endl;
    std::cout << "sizeof(message1) : " << sizeof(message1) << std::endl;
    std::cout << "=================================" << std::endl;

    char message2[6]{'H', 'e', 'l', 'l', 'o'};
    std::cout << "message2 : " << message2 << std::endl;
    std::cout << "sizeof(message2) : " << sizeof(message2) << std::endl;
    std::cout << "=================================" << std::endl;

    char message3[]{'H', 'e', 'l', 'l', 'o'}; // This is not a c string ,
                                              // as there is not null character
    std::cout << "message3 : " << message3 << std::endl;
    std::cout << "sizeof(message3) : " << sizeof(message3) << std::endl;
    std::cout << "=================================" << std::endl;

    // *String literal
    char message4[]{"Hello"};
    std::cout << "message4 : " << message4 << std::endl;
    std::cout << "sizeof(message4) : " << sizeof(message4) << std::endl;
    std::cout << "=================================" << std::endl;

    // !Can't safely print out arrays other than those of characters
    int numbers[]{1, 2, 3, 4, 5};
    std::cout << "numbers :  " << numbers << std::endl;
    std::cout << std::endl;

    return 0;
}