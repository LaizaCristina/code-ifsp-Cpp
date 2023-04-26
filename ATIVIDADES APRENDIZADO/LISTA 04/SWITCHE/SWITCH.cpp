#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{
    int iOpcao = 0;


    setlocale(LC_ALL,"");
    system("color F1");



    cout << "     Menu Principal" << endl;
    cout << "---------------------------" << endl;

    cout << " 1 - Bebidas" << endl;
    cout << " 2 - Lanches" << endl;
    cout << " 3 - Sobremesas" << endl;
    cout << " 4 - Sair" << endl;

    cout << "---------------------------" << endl;

    cout << "Opção: ";
    cin >> iOpcao;

    switch(iOpcao)
    {
    case 1:
    {
        cout << "Lista de Bebidas" << endl;
        break;
    }
    case 2:
    {
        cout << "Lista de Lanches" << endl;
        break;
    }
    case 3:
    {
        cout << "Lista de Sobremesas" << endl;
        break;
    }
    case 4:
    {
        cout << "Obrigado pela preferência!" << endl;
        break;
    }
    default:
        cout << "Opção Inválida!" << endl;
    }
}
