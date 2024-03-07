#include "Money.h"

int main() {
    Money money1, money2, result;

    money1.Init();
    money2.Init();

    std::cout << "Enter the first amount:\n";
    money1.Read();

    std::cout << "\nEnter the second amount:\n";
    money2.Read();

    // Додавання сум
    result = money1.add(money2);
    std::cout << "\nSum of amounts:\n";
    result.Display();
    std::cout << "\n";

    // Ділення сум
    result = money1.divide(money2);
    std::cout << "\nResult of dividing the first amount by the second amount:\n";
    result.Display();
    std::cout << "\n";

    // Ділення суми на дробове число
    double divisor;
    std::cout << "\nEnter a divisor (double) for the first amount:\n";
    std::cin >> divisor;

    result = money1.divideByDouble(divisor);
    std::cout << "\nResult of dividing the first amount by the entered divisor:\n";
    result.Display();
    std::cout << "\n";

    return 0;
}
