#include <iostream>
#include "estudiante.h"

struct Nodo
{
    Estudiante *datos;
    struct Nodo *siguiente;
};

typedef struct Nodo Lista;

void menu()
{
	cout << "Select your option to choice from the linked list: \n\t";
	cout << "[1]: Insert\n\t[2]: Show\n\t[3]: Search\n\t[4]: Delete\n\t[0]: Exit\n> ";
}

int add(Lista **inicio, Estudiante *est)
{
    Lista *nuevo = (Lista *) malloc(sizeof(Lista));
    if(!nuevo)
        return 0;
    nuevo->datos = new Estudiante("", "", "", 0.0);
    if(!nuevo->datos)
    {
        free(nuevo);
        return 0;
    }
    nuevo->datos->set_matricula(est->get_matricula());
    nuevo->datos->set_nombre(est->get_nombre());
    nuevo->datos->set_apellido(est->get_apellido());
    nuevo->datos->set_promedio(est->get_promedio());
    nuevo->siguiente = *inicio;
    *inicio = nuevo;

    return 1;
}

int seek(Lista *inicio)
{
    if(!inicio)
        return 0;
    cout << inicio->datos->to_string();

    return seek(inicio->siguiente);
}

Lista *search(Lista *inicio, string clave)
{
    if(!inicio)
        return NULL;
    if((inicio->datos->get_matricula()).compare(clave) == 0)
        return inicio;
    return search(inicio->siguiente, clave);
}

int drop(Lista **inicio, string clave)
{
    if(!*inicio)
        return 0;
    // Lista *item = search(*inicio, clave);
    // if(((*inicio)->datos->get_matricula()).compare(item->datos->get_matricula()) == 0)
    if(((*inicio)->datos->get_matricula()).compare(clave) == 0)
    {
        Lista *aux = *inicio;
        *inicio = (*inicio)->siguiente;
        free(aux);
        return 1;
    }
    return drop(&(*inicio)->siguiente, clave);
}