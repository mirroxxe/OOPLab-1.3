#ifndef MONEY_H
#define MONEY_H

#include <iostream>

class Money {
public:
    long hrn;  
    unsigned char kop;  

public:
    Money();  
    void Init();  
    void Read();  
    void Display();  
    std::string toString();  

    Money add(const Money& other);  // додавання сум
    Money divide(const Money& other);  // ділення сум
    Money divideByDouble(double divisor);  // ділення суми на дробове число
};

#endif  
