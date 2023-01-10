#include <iostream>
using namespace std;

//  Tanto en Java como en C++, con que se declare un solo metodo abstracto, toda la clase se considera abstracta tambien.
class Figura
{
private:
    //  Declaracion de los atributos.
    string nombre;
    int lados;
    int base;
    int altura;

public:
    //  Declaracion del constructor.
    Figura(string, int, int, int);
    
    //  Declaracion de los metodos.
    void set_nombre(string);
    string get_nombre();
    void set_lados(int);
    int get_lados();
    void set_base(int);
    int get_base();
    void set_altura(int);
    int get_altura();
    string to_string();

    //  Declaracion de los metodos abstractos de la clase.
    virtual float area() = 0;
    virtual float perimetro() = 0;
};

/*  
    Todos los metodos concretos se van desarrollando excepto los abstractos (esas se van desarrollando dependiendo 
    de la clase que herede a Figura).
*/
Figura :: Figura(string _nombre, int _lados, int _base, int _altura)
{
    this->nombre = _nombre;
    this->lados = _lados;
    this->base = _base;
    this->altura = _altura;
}

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

string Figura :: to_string()
{
    return "Nombre: "  +  nombre+
            "\nNumero de lados: " + std::to_string(lados) +
            "\nBase: " + std::to_string(base) +
            "\nAltura: " + std::to_string(altura);
}