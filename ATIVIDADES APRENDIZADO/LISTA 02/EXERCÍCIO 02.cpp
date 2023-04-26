#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{



    setlocale(LC_ALL,"");
    system("color F1");


    int media = 0;


    cout << "Média:";
    cin >> media;

    if (media >= 6)
    {
        cout << endl;
        cout << "Aluno Aprovado.";
    }

    else
    {
        cout << endl;
        cout << "Aluno Reprovado.";
    }
}
