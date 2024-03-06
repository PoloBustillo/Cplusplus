#include <iostream>

using namespace std;

int main()
{

    int arr[] = {12, 10, 1, 23, 5};

    int tam = sizeof()

        for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size() - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (auto numero : arr)
    {
        cout << numero << " ";
    }
    return 0;
}