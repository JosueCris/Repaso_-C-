#include "figura.h"

class Triangulo : public Figura
{
private:
    //  Declaramos los atributos propios de la clase hija.
    int lado1;
    int lado2;
public:
    //  Iniciamos en constructor de la padre hija complementandolo con la clase padre.
    Triangulo(string _nombre, int _lados, int _base, int _altura, int _lado1, int _lado2) : 
    Figura(_nombre, _lados, _base, _altura)
    {
        this->lado1 = _lado1;
        this->lado2 = _lado2;
    };

    //  Declaramos el/los metodo(s) de la clase hija.
    void set_lado1(int);
    int get_lado1();
    void set_lado2(int);
    int get_lado2();
    string to_string();

    // Sobreescribimos los metodos abstractos.
    float area() override
    {
        return ((this->get_base() * this->get_altura()) / 2);
    }

    float perimetro() override
    {
        return this->get_base() + this->get_lado1() + this->get_lado2();
    }
};

//  Desarrollamos el metodo de la clase local.
void Triangulo :: set_lado1(int _lado1)
{
    this->lado1 = _lado1;
}

int Triangulo :: get_lado1()
{
    return lado1;
}

void Triangulo :: set_lado2(int _lado2)
{
    this->lado2 = _lado2;
}

int Triangulo :: get_lado2()
{
    return lado2;
}

string Triangulo :: to_string()
{
    return Figura :: to_string() +
            "\nArea: " + std::to_string(this->area()) +
            "\nPerimetro: " + std::to_string(this->perimetro()) +
            "\n--------------------\n";
}