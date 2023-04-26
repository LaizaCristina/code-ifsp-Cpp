#include <cstdlib>
#include <iostream>
#include <locale.h>
using namespace std;

void exibirMensagem(void)
{
    cout << "Bem-vindo ao Mundo da Matemática" << endl;
}

int main()

{
    exibirMensagem();

    char Tabuada;
    char Centimetros;
    char Segundos;
    char Funcao;
    char Sair;
    int alternativa = 0;
    int a1 = 0;
    int t = 0;
    int N = 0;
    int s = 0;
    int money =0;
    float m = 0;


    setlocale(LC_ALL, "");
    system("color F1");

    do
    {
        cout <<"---------------------------------\n"
             "| 1 | Tabuada                   |\n"
             "| 2 | Conversor para Centímetro |\n"
             "| 3 | Conversor para Segundos   |\n"
             "| 4 | Real para dolar           |\n"
             "| 5 | Sair                      |\n"
             "---------------------------------\n"
             "Escolha a opção: ";

        cin >> alternativa;

        if (alternativa < 0 || alternativa > 5)
        {
            cout << "\nValor inválido! Digite um valor entre 1 e 5\n";
        }

    }
    while (alternativa < 0 || alternativa > 5);

    if (alternativa == 1)
    {
        cout << "Tabuada do: ";
        cin >> t;

        for (N=1; N<=10; N++)
        {
            cout << N << "x" << t << "=" << N*t << endl;
        }
    }



    if (alternativa == 2)
    {
        cout << "Digite em metros o valor a ser convertido para centímetros: " << endl;
        cin >> m;

        cout << "Valor em centímetros: " <<  m*100 << endl;

    }

    else if (alternativa == 3)
    {
        do
        {
            cout << "------------------\n"
                 "| 1 | Hora       |\n"
                 "| 2 | Minuto     |\n"
                 "| 3 | Segundos   |\n"
                 "| 4 | Sair       |\n"
                 "------------------\n"
                 "Escolha a opção a ser convertida para segundos: ";

            cin >> a1;



            if (a1 == 1)
            {
                cout << "Digite valor em Hora: " << endl;
                cin >> s;

                cout <<"Em segundos é: " << s * 3600 << endl;
            }

            else if (a1 == 2)
            {
                cout << "Digite valor em Minutos: " << endl;
                cin >> s;

                cout <<"Em segundos é: " << s * 60 << endl;
            }
            else if (a1 == 3)
            {
                cout << "Digite valor em Segundos: " << endl;
                cin >> s;

                cout <<"Em segundos é: " << s << endl;
            }

        }
        while (a1 < 4);

    }
    else if (alternativa == 4)
    {
        cout << "Digite um valor em Real que deseja converter para Dolar: ";
        cin >> money;
        cout << "\nO valor de " << money <<" R$ em Dolares é: " << money * 4.90 <<" US$";

    }
    else if (alternativa == 5)
    {
        cout << "Obrigado e volte sempre!";
    }



}

