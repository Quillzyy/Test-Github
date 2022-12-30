#include <iostream>
#include <string>

int main(){

    int number1 = 15;
    short number2 = 32767;
    int number3 = 2147483647;
    int number4 = 0b00001111;
    signed long int number5;

    std::cout << "number1 is : " << number1 << ", number 2 is : " << number2 << ", and number 3 is : " << number3 << std::endl;
    std::cout << sizeof(number5);
    return 0;
}