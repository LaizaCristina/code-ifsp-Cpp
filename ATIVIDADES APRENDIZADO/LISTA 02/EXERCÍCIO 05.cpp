
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

    if (iN % 2 == 0)
    {
        cout << "Par";
    }

    else
    {
        cout << "Impar";
    }
}
