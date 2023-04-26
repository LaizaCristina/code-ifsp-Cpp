#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int Numero = 0;
    int Jogador = 0;
    int Nivel = 0;
    setlocale(LC_ALL,"");
    system("color F1");

    srand(time(NULL));


    while (Nivel != 4)
    {

        cout << "Escolha um nível:\n\n";
        cout << "1 - Fácil\n\n";
        cout << "2 - Medio\n\n";
        cout << "3 - Dificil\n\n";
        cout << "4 - Sair\n\n";
        cin >> Nivel;



        switch (Nivel)
        {

        case 1:
        {
            Numero = rand() % 10 + 1;
            while (Numero != Jogador)
            {

                cout << "\n\nDigite um número de 1 a 10: ";
                cin >> Jogador;

                if(Numero < Jogador)
                {
                    cout << "Pensei em um número MENOR!\n";
                }
                else if (Numero > Jogador)
                {
                    cout << "Pensei em um número MAIOR!\n";
                }
                else
                {
                    cout << "Parabéns você acertou!\n";
                }

            }
            break;
        }


        case 2:
        {


            Numero = rand() % 50 + 1;
            while (Numero != Jogador)
            {



                cout << "\n\nDigite um número de 1 a 50: ";
                cin >> Jogador;

                if(Numero < Jogador)
                {
                    cout << "Pensei em um número MENOR!" << endl;
                }
                else if (Numero > Jogador)
                {
                    cout << "Pensei em um número MAIOR!" << endl;
                }
                else
                {
                    cout << "Parabéns você acertou!" << endl;
                }

            }
            break;
        }

        case 3:
        {


            Numero = rand() % 200 + 1;
            while (Numero != Jogador)
            {


                cout << "\n\nDigite um número de 1 a 200: ";
                cin >> Jogador;

                if(Numero < Jogador)
                {
                    cout << "Pensei em um número MENOR!" << endl;
                }
                else if (Numero > Jogador)
                {
                    cout << "Pensei em um número MAIOR!" << endl;
                }
                else
                {
                    cout << "Parabens você acertou!" << endl;
                }

            }
            break;
        }
        case 4:
            cout << "Você saiu, tchau!\n\n";


        }
    }
}


