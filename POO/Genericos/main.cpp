#include <iostream>
#include "comparacion.h"

int main(){
    Comparacion<int, float> *comp1;

    int num1 = 8;
    float num2 = 8.1;

    cout << "El mayor entre " << num1 << " y " << num2 << " es el: " << comp1->max(num1, num2) << endl;
    // cout << "El menor entre " << num1 << " y " << num2 << " es el: " << comp1->min(num1, num2) << endl;

    return 0;
}