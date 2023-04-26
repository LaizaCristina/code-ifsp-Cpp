#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{

    int Tabuada = 0;
    int Numero = 0;

    setlocale(LC_ALL,"");

    cout << "Tabuada do: ";
    cin >> Tabuada;


    for (Numero=1; Numero<=10; Numero++)
    {
        cout << Numero << "x" << Tabuada << "=" << Numero*Tabuada << endl;
    }

    system ("pause");
    return 0;
}
