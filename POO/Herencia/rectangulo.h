#include "figura.h"

class Rectangulo : public Figura
{
private:
    /* data */
public:
    Rectangulo(string _nombre, int _lados, int _base, int _altura) : Figura(_nombre, _lados, _base, _altura)
    {

    };

    float area() override
    {
        return this->get_base() * this->get_altura();
    }
};
