#include "Money.h"
#include <cmath>
#include <string>

Money::Money() {
    hrn = 0;
    kop = 0;
}

void Money::Init() {
    hrn = 0;
    kop = 0;
}

void Money::Read() {
    std::cout << "Enter amount in hryvnia: ";
    std::cin >> hrn;
    std::cout << "Enter amount in kopecks: ";
    std::cin >> kop;
}

void Money::Display() {
    std::cout << hrn << "," << static_cast<int>(kop) << " UAH";
}

std::string Money::toString() {
    return std::to_string(hrn) + "," + std::to_string(kop) + " UAH";
}

Money Money::add(const Money& other) {
    Money result;
    result.hrn = hrn + other.hrn;
    result.kop = kop + other.kop;
    if (result.kop >= 100) {
        result.hrn += result.kop / 100;
        result.kop %= 100;
    }
    return result;
}

Money Money::divide(const Money& other) {
    double amount1 = hrn + kop / 100.0;
    double amount2 = other.hrn + other.kop / 100.0;

    double result = amount1 / amount2;

    Money resultMoney;
    resultMoney.hrn = static_cast<long>(result);
    resultMoney.kop = static_cast<unsigned char>((result - resultMoney.hrn) * 100);

    return resultMoney;
}
Money Money::divideByDouble(double divisor) {
    double amount = hrn + kop / 100.0;
    double result = amount / divisor;

    Money resultMoney;
    resultMoney.hrn = static_cast<long>(result);
    resultMoney.kop = static_cast<unsigned char>((result - resultMoney.hrn) * 100);

    return resultMoney;
}