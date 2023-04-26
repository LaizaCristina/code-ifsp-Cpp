#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{

    int n=0;

    setlocale(LC_ALL,"");
    system("color F1");




    cout << "Informe um número de 1 a 3:";
    cin >> n;

    if (n==1)
    {
        cout << "Idioma Português - Olá Mundo!";
    }

    else if (n==2)
    {
        cout << "Idioma Inglês - Hello World!";
    }

    else if (n==3)
    {
        cout << "Idioma Francês - Bonjour tout le monde!";
    }

    else
    {
        cout << "Não foi possível realizar tarefa";
    }
}
