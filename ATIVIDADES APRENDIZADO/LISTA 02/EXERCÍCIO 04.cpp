#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{



    setlocale(LC_ALL,"");
    system("color F1");


    int iN = 0;


    cout << "Número:";
    cin >> iN;

    if (iN > 0)
    {
        cout << "Positivo.";
    }

    else if (iN == 0)
    {
        cout << "Número Neutro";
    }
    else
    {
        cout << "Negativo.";
    }
}
