#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{

    float n1 = 0;
    float n2 = 0;
    float m = 0;
    int iOpcao = 0;


    setlocale(LC_ALL,"");
    system("color F1");


    cout << "Digite primeiro número: ";
    cin >> n1;
    cout << endl;

    cout << "Digite segundo número: ";
    cin >> n2;
    cout << endl;

    cout << "1 - Média" << endl;
    cout << "2 - Diferença do maior pelo menor" << endl;
    cout << "3 - Produto" << endl;
    cout << "4 - Divisão" << endl;


    cout << "\nOpção: ";
    cin >> iOpcao;
    cout << endl;

    switch(iOpcao)
    {
    case 1:
    {
        m = (n1 + n2)/2;
        cout << "Média entre os números digitados: " << m << endl;
        break;
    }
    case 2:
    {
        if (n1>n2)
        {
            m = n1-n2;
        }

        else
        {
           m = n2-n1;
        }

        cout << "Resultado da diferença: " << m << endl;
        break;
    }

    case 3:
    {
        m = n1 * n2;
        cout << "Produtos entre os números digitados: " << m << endl;
        break;
    }
    case 4:
    {
        if (n2==0)
        {
            cout << "Segundo número precisa ser diferente de zero";
        }

        else
        {
            m = n1/n2;
            cout << "Divisão do primeiro pelo segundo: " << m << endl;
        }
        break;
    }

    default:
        cout << "Opção Inválida" << endl;
    }
}

