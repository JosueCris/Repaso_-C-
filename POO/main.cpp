#include <iostream>
#include "estudiante.h" //  Importando la libreria donde declare la clase.

int main(int argc, char const *argv[])
{
    //  Instanciando la clase Estudiante
    Estudiante *est1 = new Estudiante("S18001462", "Josue", "Tellez", 8.02);
    
    //  Obteniendo los datos que le pase al constructor de la clase iniciada.
    string enrollment = est1->get_matricula();
    string name = est1->get_nombre();
    string lastname = est1->get_apellido();
    float average = est1->get_promedio();

    //  Imprimiendo las variables que obtuve.
    cout << "Matricula: " << enrollment << endl;
    cout << "Nombre: " << name << endl;
    cout << "Apellido: " << lastname << endl;
    cout << "Promedio: " << average << endl;
    cout << "\n-------------------" << endl;

    //  Actualizando promedio.
    est1->set_promedio(8.2);

    //  La funcion to_string devuelve una cadena con todo el contenido que estoy imprimiendo de la linea 16 a la 20.
    cout << est1->to_string();

    return 0;
}