#include <iostream>


int main(){
   
   int number1 = 12; // Decimal
   int number2 = 014; // Octal
   int number3 = 0xc; // Hexadecimal
   int number4 = 0b1100; // Binary

   std::cout << "number1/decimal : " << number1 << std::endl;
   std::cout << "number2/octal : " << number2 << std::endl;
   std::cout << "number3/hexadecimal : " << number3 << std::endl;
   std::cout << "number4/binary : " << number4 << std::endl;
   
    return 0;
}