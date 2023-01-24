#include <iostream>
using namespace std;

class Profesor
{
private:
    string nombre;
    string materia;
public:
    Profesor(string, string);
    void set_nombre(string);
    string get_nombre();
    void set_materia(string);
    string get_materia();
    string to_string();
};

Profesor :: Profesor(string _nombre, string materia)
{
    this->nombre = _nombre;
    this->materia = materia;
}

void Profesor :: set_nombre(string _nombre)
{
    this->nombre = _nombre;
}

string Profesor :: get_nombre()
{
    return nombre;
}

void Profesor :: set_materia(string _materia)
{
    this->materia = _materia;
}

string Profesor :: get_materia()
{
    return materia;
}

string Profesor :: to_string()
{
    return "Nombre: "  +  nombre +
            "\nMateria: " + materia;
}