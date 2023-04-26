#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{

    int alternativa =0;
    char R1;    char b1='b';
    char R2;    char b2='b';
    char R3;    char b3='b';
    char R4;    char b4='b';

    setlocale(LC_ALL,"");
    system("color F1");

    cout <<"1 - Programação\n"
           "2 - Matemática\n"
           "3 - Laboratório\n"
           "4 - Eletricidade\n"
           "5 - Sair\n\n";
           "Escolha a opção: ";

    cin >> alternativa;

    if (alternativa == 1)
        {
        cout <<"Qual o operador de igualdade em linguagem C?\n"
                "a. =\n"
                "b. ==\n"
                "Resposta: ";

                cin >> R1;

                if (R1 == b1)
                {
                    cout<<"Acertou!";
                }
                else
                {
                    cout<<"Errou!";
                }
        }

    else if (alternativa == 2)
        {
        cout <<"Calcular 2^3.\n"
                "a. 6\n"
                "b. 8\n"
                "Resposta: ";

                cin >> R2;

                if (R2 == b2)
                {
                    cout<<"Acertou!";
                }
                else
                {
                    cout<<"Errou!";
                }
        }

        else if (alternativa == 3)
        {
        cout <<"Quantos laboratórios tem no Instituto?\n"
                "a. 3\n"
                "b. 5\n"
                "Resposta: ";

                cin >> R3;

                if (R3 == b3)
                {
                    cout<<"Acertou!";
                }
                else
                {
                    cout<<"Errou!";
                }
        }
    else if (alternativa == 4)
        {
        cout <<"A lampada acende com eletricidade?\n"
                "a. Não\n"
                "b. Sim\n"
                "Resposta: ";

                cin >> R4;

                if (R4 == b4)
                {
                    cout<<"Acertou!";
                }

                else
                {
                    cout<<"Errou!";
                }
        }
    else
        {
        cout <<"Obrigado por usar nosso aplicativo!\n";
        }



}



