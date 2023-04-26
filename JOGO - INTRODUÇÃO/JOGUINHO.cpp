#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

    int iAleatorio;

    setlocale(LC_ALL,"");
    system("color F1");

    srand(time(NULL));
    iAleatorio = rand() % 100 + 1;

    cout << "O número sorteado foi: " << iAleatorio << endl << endl;


    if (iAleatorio % 2 == 0)
    {
        cout << "PAR\n";
    }

    else
    {
        cout << "ÍMPAR\n";
    }
}
