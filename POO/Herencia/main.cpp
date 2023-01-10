#include "rectangulo.h"

int main(int argc, char const *argv[])
{
    Rectangulo *figura1 = new Rectangulo("rectangulo", 4, 8, 3);
    cout << "El area del " + figura1->get_nombre() + " es: " + std::to_string(figura1->area()) << endl;

    return 0;
}
