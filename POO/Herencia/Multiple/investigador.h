#include <iostream>
using namespace std;

class Investigador
{
private:
    string nombre;
    string especialidad;
public:
    Investigador(string, string);
    void set_nombre(string);
    string get_nombre();
    void set_especialidad(string);
    string get_especialidad();
    string to_string();
};

Investigador :: Investigador(string _nombre, string especialidad)
{
    this->nombre = _nombre;
    this->especialidad = especialidad;
}

void Investigador :: set_nombre(string _nombre)
{
    this->nombre = _nombre;
}

string Investigador :: get_nombre()
{
    return nombre;
}

void Investigador :: set_especialidad(string _especialidad)
{
    this->especialidad = _especialidad;
}

string Investigador :: get_especialidad()
{
    return especialidad;
}

string Investigador :: to_string()
{
    return "Nombre: "  +  nombre +
            "\nEspecialidad: " + especialidad;
}