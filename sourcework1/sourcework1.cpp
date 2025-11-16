#include <iostream>

int main() {
    int number1, number2;

    // 1. Read two integers
    std::cout << "Enter the first integer: ";
    if (!(std::cin >> number1)) {
        std::cerr << "Invalid input for the first number." << std::endl;
        return 1;
    }

    std::cout << "Enter the second integer: ";
    if (!(std::cin >> number2)) {
        std::cerr << "Invalid input for the second number." << std::endl;
        return 1;
    }

    // 2. Calculate and print Sum, Difference, and Product
    int sum = number1 + number2;
    int difference = number1 - number2;
    int product = number1 * number2;

    std::cout << "\n--- Calculation Results ---" << std::endl;
    std::cout << "Sum (n1 + n2): " << sum << std::endl;
    std::cout << "Difference (n1 - n2): " << difference << std::endl;
    std::cout << "Product (n1 * n2): " << product << std::endl;

    // 3. Find and print all positive divisors of the first integer (number1)
    std::cout << "\n--- Positive Divisors of " << number1 << " ---" << std::endl;

    // We iterate from 1 up to the number itself.
    for (int i = 1; i <= number1; ++i) {
        // A number 'i' is a divisor of 'number1' if the remainder 
        // of the division (number1 % i) is zero.
        if (number1 % i == 0) {
            std::cout << i << std::endl;
        }
    }

    // This line helps keep the console window open in some IDEs
    // std::cin.ignore(); 
    // std::cin.get(); 

    return 0;
}
