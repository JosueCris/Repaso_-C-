#include "profesor.h"
#include "investigador.h"

class ProfesorUniversitario : public Profesor, Investigador
{
private:
    /* data */
public:
    ProfesorUniversitario(string _nombre, string _materia, string _especialidad) :
    Profesor(_nombre, _materia),
    Investigador(_nombre, _especialidad) {};

    string to_string();
};

string ProfesorUniversitario :: to_string()
{
    return Profesor :: to_string() +
    "\nEspecialidad: " + this->get_especialidad() +
    "\n--------------------\n";
    

}