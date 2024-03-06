#include <iostream>
using namespace std;

int main()
{

    int array[] = {12, 3, 29, 10, 1, 23, 5};
    int tam = sizeof(array) / sizeof(array[0]);

    // METODO DE ORDENAR: SELECTION SORT
    for (int indiceAOrd = 0; indiceAOrd < tam - 1; indiceAOrd++) // recorre
    {
        int minIdx = indiceAOrd;
        for (int com = indiceAOrd + 1; com < tam; com++)
        {
            if (array[minIdx] > array[com])
            {
                minIdx = com;
            }
        }
        // SWAP
        int temp = array[indiceAOrd];
        array[indiceAOrd] = array[minIdx];
        array[minIdx] = temp;
    }

    for (int k = 0; k < tam; k++) // recorre
    {
        cout << array[k] << " ";
    }
    return 0;
}