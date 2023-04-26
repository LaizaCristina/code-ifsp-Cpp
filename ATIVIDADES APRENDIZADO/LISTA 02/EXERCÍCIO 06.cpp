#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{



    setlocale(LC_ALL,"");
    system("color F1");


    int f = 0;


    cout << "Frequência:";
    cin >> f ;

    if ( f >= 75)
    {
        cout << "Aprovado";
    }

    else
    {

        cout << "Reprovado";
    }
}
