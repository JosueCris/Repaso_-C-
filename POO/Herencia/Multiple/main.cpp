#include "profesor_universitario.h"

int main(int argc, char const *argv[])
{
    //  Instanciamos las superclases de las que hereda la subclase.
    Profesor *prof1 = new Profesor("Yuliana", "DAW");
    Investigador *inv1 = new Investigador("Rogelio", "Robotica");

    //  Instanciamos la clase hija que hereda a ambas clases padres.
    ProfesorUniversitario *uni1 = new ProfesorUniversitario("Luis", "Estructura de Datos", "Inteligencia Artificial");

    cout << prof1->to_string() + "\n--------------------\n";
    cout << inv1->to_string() + "\n--------------------\n";
    cout << uni1->to_string();  // No me imprime nada.
    //  Tiene problemas interpretando de cual de las dos clases padres agarrar el metodo.
    // cout << uni1->get_nombre();
    cout << "Materia: " + uni1->get_materia();  // Esto si funciona.

    return 0;
}
