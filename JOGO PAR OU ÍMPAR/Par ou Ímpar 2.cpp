#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

    int iAleatorio;
    int N1 = 0;
    int N2 = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    srand(time(NULL));
    iAleatorio = rand() % 100 + 1;

    cout << "Escolha PAR digitando 0 (zero), ou ÍMPAR digitando 1 (um).\n" << endl;

    cout << "Jogador 1:";
    cin >> N1;

    cout << "Jogador 2:";
    cin >> N2;

    cout << "\nO número sorteado foi: " << iAleatorio << endl << endl;


    if (iAleatorio % 2 == 0)
    {
        cout << "PAR\n" << endl;

    }

    else
    {
        cout << "ÍMPAR\n" << endl;
    }


    if (N1 == (iAleatorio % 2))
    {
        cout << "Jogador 1 Venceu!\n";
    }

    else
    {
        cout << "Jogador 2 Venceu!\n";
    }


}
