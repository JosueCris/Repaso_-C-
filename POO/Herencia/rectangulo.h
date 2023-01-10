#include "figura.h"

class Rectangulo : public Figura
{
private:
    /* data */
public:
    //  Declaracion del constructor de la clase hija que tambien hereda el de la padre.
    Rectangulo(string _nombre, int _lados, int _base, int _altura) : Figura(_nombre, _lados, _base, _altura)
    {
    };

    //  Declaramos el/los metodo(s) de la clase hija.
    string to_string();

    // Sobreescribimos los metodos abstractos.
    float area() override
    {
        return this->get_base() * this->get_altura();
    }

    float perimetro() override
    {
        return (this->get_base() * 2) + (this->get_altura() * 2);
    }
};

//  Desarrollamos el metodo de la clase local.
string Rectangulo :: to_string()
{
    return Figura :: to_string() +
            "\nArea: " + std::to_string(this->area()) +
            "\nPerimetro: " + std::to_string(this->perimetro()) +
            "\n--------------------\n";
}
