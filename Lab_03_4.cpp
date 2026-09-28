// Lab_03_4.cpp
// Шевченко Артем
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 29

#include <iostream>

using namespace std;

int main()
{
    double R; // вхідний параметр (радіус)
    double x; // вхідний аргумент (координата X)
    double y; // вхідний аргумент (координата Y)

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    // Розгалуження в повній формі
    if ((x * x + y * y <= R * R && y >= (x - 1) * (x - 1) && x >= 0 && y >= 0) ||
        (x * x + y * y <= R * R && x <= 0 && y <= 0))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}