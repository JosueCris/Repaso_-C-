#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num1, num2, suma;

    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    suma = num1 + num2;

    cout << "La suma de " + std::to_string(num1) + " + " + std::to_string(num2) + " es: " + std::to_string(suma) << endl;

    return 0;
}
