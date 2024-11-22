#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

// ������� ��� ���������� �������� ������� f(x)
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

    // �������� ������� ��������� R1 �� R2
    cout << "������ �������� R1: ";
    cin >> R1;
    cout << "������ �������� R2: ";
    cin >> R2;

    // �������� �������� ��������� x
    cout << "������ �������� x: ";
    cin >> x;

    // ���������� �������� ������� f(x)
    double result = f(x, R1, R2);

    // ��������� ����������
    cout << "�������� ������� f(" << x << ") = " << result << endl;

    return 0;
}
