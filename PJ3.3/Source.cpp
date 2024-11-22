#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

// Функція для обчислення значення функції f(x)
double f(double x, double R1, double R2) {
    if (x <= -2 * R2) {
        return 0; 
    }
    else if (x > -2 * R2 && x <= -R2) {
        return sqrt(R2 * R2 - (x + R2) * (x + R2)); 
    }
    else if (x > -R2 && x <= 0) {
        return (R2 / R2) * x + R2; 
    }
    else if (x > 0 && x <= 2 * R1) {
        return -sqrt(R1 * R1 - (x - R1) * (x - R1)); 
    }
    else {
        return x - 2 * R1; 
    }
}

int main() {
    SetConsoleOutputCP(1251);
    double x, R1, R2;

    // Введення значень параметрів R1 та R2
    cout << "Введіть значення R1: ";
    cin >> R1;
    cout << "Введіть значення R2: ";
    cin >> R2;

    // Введення значення аргументу x
    cout << "Введіть значення x: ";
    cin >> x;

    // Обчислення значення функції f(x)
    double result = f(x, R1, R2);

    // Виведення результату
    cout << "Значення функції f(" << x << ") = " << result << endl;

    return 0;
}
