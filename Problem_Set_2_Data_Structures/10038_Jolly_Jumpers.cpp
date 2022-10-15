#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    while (cin >> n) // Lectura de datos constante hasta que el usuario lo interrumpa
    {
        bool j = true;  // Variable que indica si es un jolly jumper o no
        int buffer = 0; // Variable que guarda el valor anterior
        vector<int> v;
        vector<int> v2;
        // Almacenamiento de los datos en un vector
        for (int i = 0; i < n; i++)
        {
            cin >> buffer;
            v.push_back(buffer);
        }
        // Almacenamiento de las diferencias en un vector
        for (int i = 0; i < n - 1; i++)
        {
            v2.push_back(abs(v[i] - v[i + 1]));
        }
        // Ordenamiento del vector de diferencias
        sort(v2.begin(), v2.end());

        // Verificación de que el vector de diferencias es un jolly jumper
        for (int i = 0; i < n - 1; i++)
        {
            if (v2[i] != i + 1)
            {
                j = false;
                cout << "Not jolly" << '\n';
                break;
            }
        }
        if (j)
        {
            cout << "Jolly" << '\n';
        }
    }
    return 0;
}