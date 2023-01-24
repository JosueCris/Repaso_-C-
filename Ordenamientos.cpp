#include <iostream>

using namespace std;

// Funciones para imprimir el arreglo
void imprime_iterativo(int array[], int length);
void imprime_recursivo(int array[], int length, int index);

// Funciones de ordenamiento
void bubble_sort(int array[], int length);
void selection_sort(int array[], int length);
void insertion_sort(int array[], int length);
void shell_sort(int array[], int length);
void quick_sort(int array[], int left, int right);


int main(int argc, char const *argv[])
{
    int numbers[] = {10, 14, 7, 2, 9, 11, 5, 23, 0, 4};
    cout << "Arreglo Inicial:" << endl;
    imprime_iterativo(numbers, 10);

    cout << "\nOrdenando . . ." << endl;
    // bubble_sort(numbers, 10);
    selection_sort(numbers, 10);
    // insertion_sort(numbers, 10);
    // quick_sort(numbers, 0, 10-1);

    // cout << "\nBubble Sort:" << endl;
    cout << "\nSelection Sort:" << endl;
    // cout << "\nInsertion Sort:" << endl;
    // cout << "\nQuick Sort:" << endl;
    imprime_iterativo(numbers, 10);

    return 0;
}

void imprime_iterativo(int array[], int length)
{
    for(int i=0; i<length; i++)
        cout << "[" + std::to_string(array[i]) + "] ";
    cout << "\n";
}

void imprime_recursivo(int array[], int length, int index)
{
    if(index < length)
    {
        cout << "[" + std::to_string(array[index]) + "] ";
        imprime_recursivo(array, length, index+1);
    }
}

void bubble_sort(int array[], int length)
{
    for(int i=0; i<length-1; i++)
    {
        for(int j=0; j<length-1-i; j++)
        {
            if(array[j] > array[j+1])
            {
                int aux = array[j+1];
                array[j+1] = array[j];
                array[j] = aux;
            }
        }
    }
}

void selection_sort(int array[], int length)
{
    int small;
    for(int i=0; i<length; i++)
    {
        small = i;
        for(int j=i+1; j<length; j++)
        {
            if(array[small] > array[j])
                small = j;
        }
        int aux = array[small];
        array[small] = array [i];
        array [i] = aux;
    }
}

void insertion_sort(int array[], int length)
{
    int pos, aux;
    for(int i=0; i<length; i++)
    {
        pos = i;
        aux = array[i];
        while((pos > 0) && (array[pos-1] > aux))
        {    
            array[pos] = array[pos-1];  
            pos--; 
        }
        array[pos] = aux;    
    }
}

void shell_sort(int array[], int length)
{
    
}

void quick_sort(int array[], int left, int right)
{
    int i, j, pivote, central;
    central = ((left + right) / 2);
    pivote = array[central];
    i = left;
    j = right;

    do
    {
        while (array[i] < pivote)
            i++;
        while (array[j] > pivote)
            j--;
        
        if (i <= j) {
            int aux = array[i];
            array[i] = array[j];
            array[j] = aux;        /* intercambia a[i] con a[j] */
            i++;
            j--;
        }
    } 
    while (i <= j);
    
    if (left < j)
        quick_sort(array, left, j);          /* mismo proceso con sublista izq */
    if (i < right)
        quick_sort(array, i, right); 

}