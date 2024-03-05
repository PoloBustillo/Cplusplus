#include <iostream>
using namespace std;

int factorial(int numero)
{
    int res = 1;
    for (int i = 1; i <= numero; i++)
    {
        res = res * i;
    }
    return res;
}

int main()
{
    int num = 6;
    int res;
    res = factorial(num);
    cout << "El factorial de " << num << " es: " << res << endl;
}
