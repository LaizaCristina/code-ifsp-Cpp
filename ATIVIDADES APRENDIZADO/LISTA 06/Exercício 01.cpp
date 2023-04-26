#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()

{

    int i = 0;
    int s = 0;

    setlocale(LC_ALL,"");
    system("color 0F");

    cout << "Para saber se você pode participar do programa informe os dados solicitados:" << endl;
    cout << "Obs: Idade e salário devem ser maiores que 0 (zero)!\n" << endl;

    cout << "Idade: ";
    cin >> i;

    cout << "Salário: ";
    cin >> s;
    cout << endl;

    while (i < 0 || s < 0)
    {
        cout << "Idade e Salário devem ser maiores que 0 (zero)!" << endl;
        cout << "Idade: ";
        cin >> i;

        cout << "Salário:";
        cin >> s;
        cout << endl;
    }

    if (i >= 18 && s <=800)
    {
        cout << "Você pode participar!!" << endl;
    }

    else
    {
        cout << "Você NÃO pode participar!" << endl;
    }

}
