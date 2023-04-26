#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()

{
    int idade = 0;
    int v = 1;

    setlocale(LC_ALL,"");
    system("color 0F");


    cout << "Digite as 8 idades:\n" << endl;

    do
    {
        cout << "idade " << v << ": ";
        cin >> idade;

        while (idade < 0 || idade > 150)
        {
            cout << "\nValor inválido, tente novamente!" << endl;

            cout << "Nota " << v << ": ";
            cin >> idade;
        }

        v = v + 1;

        if (v <=8)
        {
              cout << "\nDigite próxima idade:" << endl;
        }

    } while (v <= 8);

}


