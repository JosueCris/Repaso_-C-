/* 
    Este archivo ".h" es una libreria de C/C++ aqui se implementa la creacion y definicion de la clase
    que sera instanciada en un archivo ".cpp".
*/
#include <stdlib.h>
using namespace std;

class Estudiante
{
    //  Atributos de la clase.
    private:
        string matricula;
        string nombre;
        string apellido;
        float promedio;

    public:
        //  Constructor de la clase.
        Estudiante(string, string, string, float);

        //  Declaracion de los metodos de la clase (getters y setters).
        void set_matricula(string);
        string get_matricula();
        void set_nombre(string);
        string get_nombre();
        void set_apellido(string);
        string get_apellido();
        void set_promedio(float);
        float get_promedio();
        string to_string();

};
//  Inicializando constructor . . .
Estudiante::Estudiante(string _matricula, string _nombre, string _apellido, float _promedio)
{
    matricula = _matricula;
    nombre = _nombre;
    apellido = _apellido;
    promedio = _promedio;
}

//  Implementacion de los demas metodos.
void Estudiante :: set_matricula(string _matricula)
{
    matricula = _matricula;
}

string Estudiante :: get_matricula()
{
    return matricula;
}

void Estudiante :: set_nombre(string _nombre)
{
    nombre = _nombre;
}

string Estudiante :: get_nombre()
{
    return nombre;
}

void Estudiante :: set_apellido(string _apellido)
{
    apellido = _apellido;
}

string Estudiante :: get_apellido()
{
    return apellido;
}


void Estudiante :: set_promedio(float _promedio)
{
    promedio = _promedio;
}

float Estudiante :: get_promedio()
{
    return promedio;
}

/*
    No confundir el nombre de mi metodo to_string con el de la funcion para convertir a cualquier tipo de dato a 
    cadena, no tenia conocimiento de la existencia de esa funcion. Conservo el nombre del metodo como convencion
    de que asi se llama en el lenguaje Java.
*/ 
string Estudiante :: to_string()
{
    return "Matricula: " + matricula +
            "\nNombre: "  + nombre +
            "\nApellido: " + apellido +
            "\nPromedio: " + std::to_string(promedio) +
            "\n--------------------\n";
}