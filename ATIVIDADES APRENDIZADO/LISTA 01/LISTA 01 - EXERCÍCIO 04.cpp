#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    system("color F1");

    float s=0;
    float v=0;

    cout << "Salário fixo: ";
    cin >> s;

    cout << "Vendas: ";
    cin >> v;

    cout << "Comissão: " << v * 4/100 <<endl;

    cout << "Salário final: " << s + (v * 4/100);
}

