#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    system("color F1");

    int valor_1=0;
    int valor_2=0;
    int valor_3=0;


    cout << "Digite valor 1: ";
    cin >> valor_1;

    cout << "Digite valor 2: ";
    cin >> valor_2;

    cout << "Digite valor 3: ";
    cin >> valor_3;

    cout << "Resultado da Multiplicação:" << valor_1*valor_2*valor_3 << endl;


}
