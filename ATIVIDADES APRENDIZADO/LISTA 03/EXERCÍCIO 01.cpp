#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{



    setlocale(LC_ALL,"");
    system("color F1");


    int numero = 0;


    cout << "Número mês:";
    cin >> numero;

    if (numero==1)
    {
        cout << "Janeiro.";
    }

   else if (numero==2)
    {
        cout << "Fevereiro.";
    }

     else if (numero==3)
    {
        cout << "Março.";
    }

     else if (numero==4)
    {
        cout << "Abril.";
    }

     else if (numero==5)
    {
        cout << "Maio.";
    }

     else if (numero==6)
    {
        cout << "Junho.";
    }

     else if (numero==7)
    {
        cout << "Julho.";
    }

     else if (numero==8)
    {
        cout << "Agosto.";
    }

     else if (numero==9)
    {
        cout << "Setembro.";
    }

     else if (numero==10)
    {
        cout << "Outubro.";
    }

     else if (numero==11)
    {
        cout << "Novembro.";
    }

     else if (numero==12)
    {
        cout << "Dezembro.";
    }
}
