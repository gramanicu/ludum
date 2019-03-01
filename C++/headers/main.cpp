// Copyright Grama Nicolae 2019
#include "./header.h"

int main() {
    int a, b;

    std::cout << "Enter first number: ";
    std::cin >> a;

    std::cout << "Enter second number: ";
    std::cin >> b;

    std::cout << "Sum = " << sum(a, b) << std::endl;
    std::cout << "Difference = " << difference(a, b) << "\n";
    std::cout << "Product = " << product(a, b) << "\n";
    std::cout << "Division (quotient?) = " << division(a, b) << "\n";

    return 1;
}