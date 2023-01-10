//  Por alguna razon debo comentar las librerias que no ocupe y las instancias para que funcione el programa.
// #include "rectangulo.h"
// #include "triangulo.h"
#include "circulo.h"

int main(int argc, char const *argv[])
{
    /* 
        Como regla en POO no se puede instanciar una clase abstracta, pero si se pueden heredar las propiedades de ella. 
        lo de la linea 9 no es permitido.
    */
    // Figura *padre = new Figura("rectangulo", 4, 8, 3);

    /* 
        En este caso instanciamos la clase Rectangulo que a su vez esta heredando a la clase abstracta Figura, asi accedemos a los metodos 
        de la clase padre. 
    */
    // Rectangulo *figura1 = new Rectangulo("Rectangulo", 4, 8, 3);
    // cout << figura1->to_string();

    
    // Triangulo *figura2 = new Triangulo("Isosceles", 3, 5, 6, 5, 5);
    // cout << figura2->to_string();


    Circulo *figura3 = new Circulo("Circulo", 0, 0, 0, 4, 8);
    cout << figura3->to_string();

    return 0;
}
