#include <iostream>
#include <cmath>
#include <stdexcept>

double calculatePower(double base, int exponent) {
    if (exponent < 0) {
        throw std::invalid_argument("Exponent should be a non-negative integer.");
    }

    return pow(base, exponent);
}

int main() {
    double base;
    int exponent;

    std::cout << "Enter the base number: ";
    std::cin >> base;

    std::cout << "Enter the exponent: ";
    std::cin >> exponent;

    try {
        double result = calculatePower(base, exponent);
        std::cout << base << " raised to the power of " << exponent << " is: " << result << std::endl;
    } catch (std::invalid_argument &ex) {
        std::cout << "Error: " << ex.what() << std::endl;
    }

    return 0;
}
