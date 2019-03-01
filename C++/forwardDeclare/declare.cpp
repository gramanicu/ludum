#include <iostream>

int sum(int ,int);
int difference(int, int);
int product(int, int);
int division(int, int);

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

int sum(int a, int b) {
    return a+b;
}

int difference(int a, int b) {
    return a-b;
}

int product(int a, int b) {
    return a*b;
}

int division(int a, int b) {
    return a/b;
}