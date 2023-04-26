#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()

{
    int idade = 0;
    int v = 1;
    int q = 0;
    string t;
    float v1 = 0;
    float p5 = 0;
    int soma = 0;


    setlocale(LC_ALL,"");
    system("color 0F");


    do
    {
        cout << "Digite o código desejado: ";
        cin >> t;


        while (t != "P" && t != "p" && t != "V" && t != "v")
        {
            cout << "Código inválido, digite novamente: ";
            cin >> t;
        }

        cout << "valor " << v << ": ";
        cin >> v1;

        while (v1 < 0)
        {
            cout << "\nValor inválido, tente novamente!" << endl;

            cout << "Valor " << v << ": ";
            cin >> v1;
        }

        v = v + 1;

    }
    while (v <= 3);

}

