#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<variant<int, string>> array = {10, "Hola", 30};

    cout << array.size() << endl;
    int tam = array.size();
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
        auto temp = array[indiceAOrd];
        array[indiceAOrd] = array[minIdx];
        array[minIdx] = temp;
    }

    for (const variant<int, string> &e : array)
    {
        if (const int *int_ptr = get_if<int>(&e))
        {
            cout << *int_ptr << " ";
        }
        else if (const string *str_ptr = get_if<string>(&e))
        {
            cout << *str_ptr << " ";
        }
    }
    return 0;
}