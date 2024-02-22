#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int n; // numero de filas y columnas
    cout << "Dame el numero de filas y columnas:" << endl;
    cin >> n; // 4

    // Declarando dos matrices flotante de n x n
    float A[n][n]; // 4: 0-3
    float B[n][n];
    float C[n][n];

    // Inicializar o llenar nuestra matrices
    for (int i = 0; i < n; i++) // recorrer las filas
    {
        // i 0
        // i 1
        // i 2
        for (int j = 0; j < n; j++) // recorrer las columnas
        {
            // j 0 - 1 - 2 - 3
            // j 0 - 1 - 2 - 3
            // j 0 - 1 - 2 - 3
            cout << "Dame el valor de A[" << i << "][" << j << "]" << endl;
            cin >> A[i][j];
            cout << "Dame el valor de B[" << i << "][" << j << "]" << endl;
            cin >> B[i][j];
        }
    }

    // Visualizar mi matriz
    for (int i = 0; i < n; i++) // recorrer las filas
    {
        // i 0
        // i 1
        // i 2
        for (int j = 0; j < n; j++) // recorrer las columnas
        {
            // j 0 - 1 - 2 - 3
            // j 0 - 1 - 2 - 3
            // j 0 - 1 - 2 - 3
            cout << "A[" << i << "][" << j << "] = " << A[i][j] << endl;
            cout << "B[" << i << "][" << j << "] = " << B[i][j] << endl;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    // Visualizar mi matriz
    for (int i = 0; i < n; i++) // recorrer las filas
    {
        for (int j = 0; j < n; j++) // recorrer las columnas
        {
            cout << "C[" << i << "][" << j << "] = " << C[i][j] << endl;
        }
    }

    return 0;
}
