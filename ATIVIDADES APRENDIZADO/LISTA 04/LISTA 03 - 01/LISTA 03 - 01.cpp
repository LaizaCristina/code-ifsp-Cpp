#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{
    int iOpcao = 0;


    setlocale(LC_ALL,"");
    system("color F1");


    cout << "1- Janeiro         7- Julho" << endl;
    cout << "2- Fevereiro       8- Agosto" << endl;
    cout << "3- Março           9- Setembro" << endl;
    cout << "4- Abril           10- Outubro" << endl;
    cout << "5- Maio            11- Novembro" << endl;
    cout << "6- Junho           12- Dezembro" << endl;

    cout << endl;
    cout << "Opção: ";
    cin >> iOpcao;
    cout << endl;

    switch(iOpcao)
    {
    case 1:
    {
        cout << "Mês de Janeiro:" << endl;
        break;
    }
    case 2:
    {
        cout << "Mês de Fevereiro:" << endl;
        break;
    }
    case 3:
    {
        cout << "Mês de Março:" << endl;
        break;
    }
    case 4:
    {
        cout << "Mês de Abril:" << endl;
        break;
    }

    case 5:
    {
        cout << "Mês de Maio:" << endl;
        break;
    }

    case 6:
    {
        cout << "Mês de Junho:" << endl;
        break;
    }

    case 7:
    {
        cout << "Mês de Julho:" << endl;
        break;
    }

    case 8:
    {
        cout << "Mês de Agosto:" << endl;
        break;
    }

    case 9:
    {
        cout << "Mês de Setembro:" << endl;
        break;
    }

    case 10:
    {
        cout << "Mês de Outubro:" << endl;
        break;
    }

    case 11:
    {
        cout << "Mês de Novembro:" << endl;
        break;
    }

    case 12:
    {
        cout << "Mês de Dezembro:" << endl;
        break;
    }
    default:
        cout << "Opção Inválida" << endl;
    }
}

