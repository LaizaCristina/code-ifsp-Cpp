#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()

{
    int n = 0;
    int Np = 2;
    int P = 1;

    setlocale(LC_ALL,"");
    system("color 0F");

    while (n <=0)
    {
        cout <<" Digite o número desejado: ";
        cin >> n;
    }
    //cout <<" \nNúmeros menores que zero são inválidos.\n";
    //cout <<"Digite número novamente:";
    //cin >> n;

    while (Np <= n)
    {
        if (n % Np == 0)
        {
            P++;
        }

        Np++;
    }

    if (P <= 2)
    {
        cout << "\nO número é primo\n";
    }
    else
    {
        cout << "\nO número não é primo";
    }
}
