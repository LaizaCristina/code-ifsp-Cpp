#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{



    setlocale(LC_ALL,"");
    system("color F1");


    int idade = 0;


    cout << "Idade:";
    cin >> idade;

    if (idade >= 16)
    {
        cout << endl;
        cout << "Pode votar";
    }

    else
    {
        cout << endl;
        cout << "NÃO pode votar.";
    }
}
