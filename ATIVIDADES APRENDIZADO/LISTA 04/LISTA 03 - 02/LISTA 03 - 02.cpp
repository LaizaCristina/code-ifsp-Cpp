#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{
    int iOpcao = 0;
    char R1;    char b1='b';
    char R2;    char b2='b';
    char R3;    char b3='b';
    char R4;    char b4='b';


    setlocale(LC_ALL,"");
    system("color F1");


    cout << "1 - Programação\n"
           "2 - Matemática\n"
           "3 - Laboratório\n"
           "4 - Eletricidade\n"
           "5 - Sair\n\n";
           "Escolha a opção: ";

    cout << endl;

    cout << "Opção: ";
    cin >> iOpcao;

    cout << endl;

    switch(iOpcao)
    {
    case 1:
    {
        cout << "Qual o operador de igualdade em linguagem C?\n"
                "a. =\n"
                "b. ==\n"
                "Resposta: ";
        cin >> R1;

        cout << ((R1= b1) ? "Acertou" : "Errou") << endl;

        break;
    }

    case 2:
    {
        cout <<"Calcular 2^3.\n"
                "a. 6\n"
                "b. 8\n"
                "Resposta: ";

                cin >> R2;

        cout << ((R2= b2) ? "Acertou" : "Errou") << endl;

        break;
    }

    case 3:
    {
        cout <<"Quantos laboratórios tem no Instituto?\n"
                "a. 3\n"
                "b. 5\n"
                "Resposta: ";

                cin >> R3;

        cout << ((R3= b3) ? "Acertou" : "Errou") << endl;

        break;
    }

    case 4:
    {
        cout <<"A lampada acende com eletricidade?\n"
                "a. Não\n"
                "b. Sim\n"
                "Resposta: ";

                cin >> R4;

        cout << ((R4= b4) ? "Acertou" : "Errou") << endl;

        break;
    }

    default:
        cout << "Opção Inválida" << endl;
    }
}
