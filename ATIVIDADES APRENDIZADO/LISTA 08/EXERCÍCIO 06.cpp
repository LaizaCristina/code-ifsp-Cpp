#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()

{

    int Numero = 0;
    int Valor = 1;

    setlocale(LC_ALL,"");
    system("color 0F");



    cout << "Digite número: ";
    cin >> Numero;

    do
    {
        Numero++;

        cout << Numero << endl;

        Valor++;

    }while (Valor <= 10);
}

