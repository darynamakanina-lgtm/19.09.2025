#include <iostream>
using namespace std;
int main() {
    int number1 = 5;
    int number2 = 10;
    int sum;
    int difference;

    sum = number1 + number2;
    difference = number1 - number2;

    std::cout << "Перше число: " << number1 << std::endl;
    std::cout << "Друге число: " << number2 << std::endl;
    std::cout << "Сума цих чисел: " << sum << std::endl; 
    std::cout << "Різниця: " << difference << std::endl;

   
    return 0;
}