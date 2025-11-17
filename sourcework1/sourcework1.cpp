#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> generateDivisors(int n) {
    std::vector<int> divisors;
    int absolute_n = std::abs(n);

    for (int i = 1; i <= absolute_n; ++i) {
        if (absolute_n % i == 0) {
            divisors.push_back(i);
        }
    }

    return divisisors;
}

int main() {
    int number1, number2;

    std::cout << "Please enter the first integer: ";
    if (!(std::cin >> number1)) {
        std::cerr << "Invalid input for the first number." << std::endl;
        return 1;
    }

    std::cout << "Please enter the second integer: ";
    if (!(std::cin >> number2)) {
        std::cerr << "Invalid input for the second number." << std::endl;
        return 1;
    }

    int sum = number1 + number2;
    int difference = number1 - number2;
    int product = number1 * number2;

    std::cout << "\n--- Basic Calculations ---" << std::endl;
    std::cout << "Sum (n1 + n2): " << sum << std::endl;
    std::cout << "Difference (n1 - n2): " << difference << std::endl;
    std::cout << "Product (n1 * n2): " << product << std::endl;

    std::vector<int> divisors_list = generateDivisors(number1);

    std::cout << "\n--- Positive Divisors of " << number1 << " ---" << std::endl;

    if (divisors_list.empty()) {
        std::cout << "No divisors found." << std::endl;
    }
    else {
        for (int divisor : divisors_list) {
            std::cout << divisor << std::endl;
        }
    }

    return 0;
}
