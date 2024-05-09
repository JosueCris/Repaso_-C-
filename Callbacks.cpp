#include <iostream>
#include <memory>
#include <vector>
#include <math.h>

using namespace std;

typedef float (*callback)(int); // definicion de la firma de la funcion callback como tipo.

//float calculate(int num, float (*opt)(int));
float calculate(int num, callback opt); //  Funcion callback.

// Funciones que se pasan como parametro.
float cb_square(int num);
float cb_cube(int num);
float cb_sqrt(int num);

int main() 
{
  cout << "Numero al cuadrado: " << calculate(8, cb_square) << endl;
  cout << "Numero al cubo: " << calculate(8, cb_cube) << endl;
  cout << "Raiz cuadrada: " << calculate(8, cb_sqrt) << endl;
  
  return 0;
}

float calculate(int num, callback opt)
{
  return opt(num);
}

float cb_square(int num)
{
  return num * num;
}

float cb_cube(int num)
{
  return num * num * num;
}

float cb_sqrt(int num)
{
  return sqrt(num);
}