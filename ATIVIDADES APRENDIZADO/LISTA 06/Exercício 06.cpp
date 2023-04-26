#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()

{
    float n = 0;

    setlocale(LC_ALL,"");
    system("color 0F");

    cout << "Informe um número: ";
    cin >> n;

    while (!(n >= 1 && n <=10))
    {
        cout << "\nO número está INCORRETO!\n" << endl;
        cout << "Informe número novamente: ";
        cin >> n;
    }

    if (n >= 1 && n <=10)
    {
        cout << "\nNúmero está DENTRO do intervalo de 1 a 10" << endl;
    }

}
