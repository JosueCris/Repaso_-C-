#include <iostream>
using namespace std;

class Figura
{
private:
    string nombre;
    int lados;
    int base;
    int altura;

public:
    Figura :: Figura(string _nombre, int _lados, int _base, int _altura)
    {
        this->nombre = _nombre;
        this->lados = _lados;
        this->base = _base;
        this->altura = _altura;
    }

    virtual float area() = 0;

    void Figura :: set_nombre(string _nombre)
    {
        this->nombre = _nombre;
    }

    string Figura :: get_nombre()
    {
        return nombre;
    }

    void Figura :: set_lados(int _lados)
    {
        this->lados = _lados;
    }

    int Figura :: get_lados()
    {
        return lados;
    }

    void Figura :: set_base(int _base)
    {
        this->base = _base;
    }

    int Figura :: get_base()
    {
        return base;
    }

    void Figura :: set_altura(int _altura)
    {
        this->altura = _altura;
    }

    int Figura :: get_altura()
    {
        return altura;
    }
};