#include "figura.h"
#include <math.h>

class Circulo : public Figura
{
private:
    int radio;
    int diametro;
public:
    Circulo(string _nombre, int _lados, int _base, int _altura, int _radio, int _diametro) : 
    Figura(_nombre, _lados, _base, _altura)
    {
        this->radio = _radio;
        this->diametro = _diametro;
    };

    //  Declaramos el/los metodo(s) de la clase hija.
    void set_radio(int);
    int get_radio();
    void set_diametro(int);
    int get_diametro();
    string to_string();

    // Sobreescribimos los metodos para adaptarlo al comportamiento de un circulo.
    float area() override
    {
        return M_PI * pow(radio, 2);
    }

    float perimetro() override
    {
        return 2 * M_PI * radio;
    }
};

//  Desarrollamos el metodo de la clase local.
void Circulo :: set_radio(int _radio)
{
    this->radio = _radio;
}

int Circulo :: get_radio()
{
    return radio;
}

void Circulo :: set_diametro(int _diametro)
{
    this->diametro = _diametro;
}

int Circulo :: get_diametro()
{
    return diametro;
}

string Circulo :: to_string()
{
    return Figura :: to_string() +
            "\nArea: " + std::to_string(this->area()) +
            "\nPerimetro: " + std::to_string(this->perimetro()) +
            "\n--------------------\n";
}
