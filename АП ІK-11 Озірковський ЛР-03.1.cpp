// АП ІK-11 Озірковський ЛР-03.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//// Lab_03_1.cpp
// <Озірковський Денис>
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 11

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    double x; //  значення,введене користувачем
    double y;// результат
    double A;// проміжний результат виразу
    cout << "X-?"; cin >> x;
    //спосіб 1
    if (x <= -1)
    
    A = exp(abs(2 + x));

    if (x > -1 && x < 1)
        
    A = sin(1 / abs(2 + x)) * sin(1 / abs(2 + x));

    if (x >= 1)
        A = cos(x) * cos(x) / (1 + abs(sin(x)));
    
    y = 2 * abs(5 - x) - A;

    cout << endl;
    cout << "1) y=" << y << endl;
    //спосіб 2

    if (x <= -1)
        A = exp(abs(2 + x));
    else
        if (x > -1 && x < 1)
            A = sin(1 / abs(2 + x)) * sin(1 / abs(2 + x));
        else
            A = cos(x) * cos(x) / (1 + abs(sin(x)));

    y = 2 * abs(5 - x) - A;
    cout << "2) y=" << y << endl;
    cin.get();
        return 0;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
