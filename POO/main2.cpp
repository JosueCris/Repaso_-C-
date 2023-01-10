#include "lista.h"

int main(int argc, char const *argv[])
{
    Lista *lista = NULL;

    Estudiante *est1 = new Estudiante("S18001462", "Josue", "Tellez", 8.02);
    Estudiante *est2 = new Estudiante("S18001417", "Victor", "Cartas", 7.2);
    Estudiante *est3 = new Estudiante("S18021147", "Cristian", "Vega", 6.9);

    add(&lista, est1);
    add(&lista, est2);
    add(&lista, est3);

    seek(lista);

    Lista *buscado = search(lista, "S18001414");
    if(buscado)
        cout << "Encontrado:" << endl << buscado->datos->to_string();
    else    
        cout << "No se encuentra :(" << endl;

    
    drop(&lista, "S18001417");
    seek(lista);

    return 0;
}
