#include "lista.h"

int main(int argc, char const *argv[])
{
    Lista *lista = NULL;
    Lista *buscado = NULL;
    Estudiante *est = NULL;
    int op;
    string enrollment, name, lastname;
    float average;

    do
	{
		menu();
		cin >> op;

		switch(op)
		{
			case 1:
				cout << "\nIngresa tu matricula: ";
                cin >> enrollment;
                cout << "Ingresa tu nombre: ";
                cin >> name;
                cout << "Ingresa tu apellido: ";
                cin >> lastname;
                cout << "Ingresa tu promedio: ";
                cin >> average;

                est = new Estudiante(enrollment, name, lastname, average);
				if(add(&lista, est))
                    cout << "\nAgregado a la lista !!!" << endl;
                else
                    cout << "\nNo se pudo agregar :(" << endl;
                system("cls || clear");
			    break;

			case 2:
				cout << "\nLISTA DE ESTUDIANTES" << endl;
                cout <<"--------------------\n";
				seek(lista);
				cout << "\n";
				break;		
			
			case 3: 
				cout << "\nIngresa la matricula del estudiante a buscar: ";
                cin >>  enrollment;
				buscado = search(lista, enrollment);
                if(buscado)
                    cout << "\nEncontrado:" << endl << buscado->datos->to_string() <<endl;
                else    
                    cout << "\nNo se encuentra :(" << endl;
                break;

			case 4:
				cout << "\nIngresa la matricula del estudiante a eliminar: ";
                cin >>  enrollment;
				if (drop(&lista, enrollment))
					cout << "Se ha eliminado correctamente !!!" << endl << endl;
				else
					cout << "No se pudo eliminar :( !!!" << endl << endl;
				break;

			case 0:
				cout << "\nHasta luego :D" << endl;
				return 0;
				break;	

			default:
				cout << "\nIntentalo de nuevo !!!" << endl;
				break;	
		}
	}while(op != 0);

    return 0;
}