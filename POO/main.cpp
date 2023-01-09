#include <iostream>
#include "estudiante.h"

int main(int argc, char const *argv[])
{
    Estudiante *est1 = new Estudiante("S18001462", "Josue", "Tellez", 8.02);
    
    string enrollment = est1->get_matricula();
    string name = est1->get_nombre();
    string lastname = est1->get_apellido();
    float average = est1->get_promedio();
    
    cout << "Matricula: " <<enrollment <<endl;
    cout << "Nombre: " <<name <<endl;
    cout << "Apellido: " <<lastname <<endl;
    cout << "Promedio: " <<average <<endl;

    est1->set_promedio(8.2);
    average = est1->get_promedio();

    cout << "Matricula: " <<enrollment <<endl;
    cout << "Nombre: " <<name <<endl;
    cout << "Apellido: " <<lastname <<endl;
    cout << "Promedio: " <<average <<endl;

    return 0;
}