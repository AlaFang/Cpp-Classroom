#include<iostream>
#include<ctime>

int main() {
    std::cout << "Hello World!" << std::endl;
    std::cout << "My name is Xinyue Fang.\n";
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    std::cout << "Today is "
              << (tm.tm_year + 1900) << "-"
              << (tm.tm_mon + 1) << "-"
              << tm.tm_mday << "\n";
    std::cout << "I am a student of Quantitative Finance.\n";

    int a,b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    std::cout << "Sum: " << a + b << "\n";
    std::cout << "Difference: " << a - b << "\n";
    std::cout << "Product: " << a * b << "\n";

    if (b != 0) {
        std::cout << "Quotient: " << a / b << "\n";
        std::cout << "Remainder: " << a % b << "\n";
    } else {
        std::cout << "Cannot divide by zero!\n";
    }

    std::cout << "Basic data types and their sizes (in bytes):\n";
    std::cout << "char: " << sizeof(char) << "\n";
    std::cout << "unsigned char: " << sizeof(unsigned char) << "\n";
    std::cout << "short: " << sizeof(short) << "\n";
    std::cout << "unsigned short: " << sizeof(unsigned short) << "\n";
    std::cout << "int: " << sizeof(int) << "\n";
    std::cout << "unsigned int: " << sizeof(unsigned int) << "\n";
    std::cout << "long: " << sizeof(long) << "\n";
    std::cout << "unsigned long: " << sizeof(unsigned long) << "\n";
    std::cout << "long long: " << sizeof(long long) << "\n";
    std::cout << "unsigned long long: " << sizeof(unsigned long long) << "\n";
    std::cout << "float: " << sizeof(float) << "\n";
    std::cout << "double: " << sizeof(double) << "\n";
    std::cout << "long double: " << sizeof(long double) << "\n";
    std::cout << "boolean type: " << sizeof(bool) << "\n";
    std::cout << "Void type: " << sizeof(void*) << "\n";
    std::cout << "Nullptr: " << nullptr << "\n";

    int revenue,cost;
    double taxrate;

    std::cout << "What is your revenue?\n";
    std::cin >> revenue;
    std::cout << "What is your cost?\n";
    std::cin >> cost;
    std::cout << "What is the tax rate you are using?\n";
    std::cin >> taxrate;

    int grossProfit = revenue - cost;
    double netaProfit =grossProfit * (1-taxrate);
    return 0;
}//
// Created by 86177 on 2025/10/7.
//