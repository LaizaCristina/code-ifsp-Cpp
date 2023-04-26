#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{



    setlocale(LC_ALL,"");
    system("color F1");


    int aa = 0;
    int an = 0;
    int idade = 0;

    cout << "Ano atual:";
    cin >> aa;

    cout << "Ano de nascimento:";
    cin >> an;

    cout << "idade:" << aa-an;

    if (aa-an >=18)
    {
        cout << endl;
        cout << "Habilitação liberada";
    }
    else
    {
        cout << "Habilitação NÃO liberada";
    }
}
