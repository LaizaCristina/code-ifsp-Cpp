#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    system("color F1");

    int an= 0;
    int aa=0;


    cout << "Ano de nascimento: ";
    cin >> an;
    cout << endl;

    cout << "Ano Atual: ";
    cin >> aa;
    cout << endl;

    cout << "Idade em anos:" << aa-an << endl << endl;

    cout << "Idade em meses:" << (aa-an)*12 << endl << endl;

    cout << "Idade em dias:" << (aa-an)*365 << endl << endl;

    cout << "Idade em semanas:" << (aa-an)*52 << endl << endl;

}




