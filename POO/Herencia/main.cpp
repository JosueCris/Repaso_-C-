#include "rectangulo.h"

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
    Rectangulo *figura1 = new Rectangulo("rectangulo", 4, 8, 3);
    cout << figura1->to_string();

    

    return 0;
}
