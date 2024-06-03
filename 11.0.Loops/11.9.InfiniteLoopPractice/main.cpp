#include <iostream>

int main()
{
    char operation; // +,-,*,/
    double operand1;
    double operand2;
    bool end{false};
    bool no_operation{};

    std::cout << "\nWelcome to Awesome Calculator" << std::endl;

    while ((end == false))
    {
        // Do some processing
        std::cout << "--------------------------------------------" << std::endl;
        std::cout << "What operation do you want help with? " << std::endl;
        std::cout << "+,-,* and / are supported. Please choose one and type below" << std::endl;

        do
        {
            std::cout << "\nYour operation : ";
            std::cin >> operation;
            no_operation = (operation == '+' || operation == '-' || operation == '/' || operation == '*') ? false : true;
            if (no_operation)
            {
                std::cout << "Invalid operation! Try again...";
            }
        } while (no_operation);

        std::cout << "\nOperand 1: ";
        std::cin >> operand1;
        std::cout << "Operand 2: ";
        std::cin >> operand2;
        std::cout << std::endl;
        std::cout << std::endl;

        switch (operation)
        {
        case '+':
            std::cout << operand1 << " + " << operand2 << " = " << (operand1 + operand2) << std::endl;
            break;
        case '-':
            std::cout << operand1 << " - " << operand2 << " = " << (operand1 - operand2) << std::endl;
            break;
        case '*':
            std::cout << operand1 << " * " << operand2 << " = " << (operand1 * operand2) << std::endl;
            break;
        case '/':
            std::cout << operand1 << " / " << operand2 << " = " << (operand1 / operand2) << std::endl;
            break;
        default:
            std::cout << operation << " operation not supported" << std::endl;
            break;
        }

        std::cout << "\nContinue ? ( Y | N) : ";

        char go_on;
        std::cin >> go_on;

        end = (go_on == 'Y' || go_on == 'y') ? false : true;
    }

    std::cout << "Done helping out. BYE!" << std::endl;

    return 0;
}