// Chees.cpp 

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    int size;
    cout << "Введите размер: "; cin >> size;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                for (int l = 0; l < size; l++)
                {
                    if ((i + k) % 2) cout << "  ";
                    else cout << "* ";

                }
            }
            cout << endl;
        }
    }
    
}

 





