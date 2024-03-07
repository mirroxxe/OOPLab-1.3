#include "pch.h"
#include "CppUnitTest.h"
#include "../OOPLab#1.3/Money.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(MoneyUnitTest)
    {
    public:

        TEST_METHOD(TestAddFunction)
        {
            // Створення об'єктів з використанням конструктора з параметрами
            Money money1(5, 10);
            Money money2(5, 20);

            // Очікуваний результат додавання
            Money expected(15, 75);

            // Додавання сум
            Money result = money1.add(money2);

            // Перевірка, чи результат вірний
            Assert::AreEqual(expected.toString().c_str(), result.toString().c_str());
        }
    };
}
