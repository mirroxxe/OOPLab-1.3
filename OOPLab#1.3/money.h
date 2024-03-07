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

    Money add(const Money& other);  // ��������� ���
    Money divide(const Money& other);  // ������ ���
    Money divideByDouble(double divisor);  // ������ ���� �� ������� �����
};

#endif  
