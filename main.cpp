#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    // Исходные данные
    double a, y;
    // Ввод исходных данных
    std::cout << "a="; std::cin >> a;
    // Нахождение значения функции
    if (a<1) y=1/a;
    else {
        if (a>2) y=4;
        else y=a*a;
    }
    std::cout<<"f("<<a<<")="<<y<<std::endl;
    return 0;
}
