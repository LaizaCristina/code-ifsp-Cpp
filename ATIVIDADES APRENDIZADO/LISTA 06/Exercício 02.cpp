#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()

{
    int i = 0;
    int a = 0;

    setlocale(LC_ALL,"");
    system("color 0F");

    cout << "Para verificar se é obrigatório votar, informe os dados solicitados." << endl;
    cout << "Obs: IDADE deve ser maior que 0 (zero) e ESCOLARIDADE deve ser 1 ou 0!\n" << endl;
    cout << "Idade: ";
    cin >> i;
    cout << endl;

    cout << "ESCOLARIDADE: É alfabetizado? ( Digite (1) p/ sim e (0) p/ não): ";
    cin >> a;
    cout << endl;


    while ((i < 0 || i > 200) || (a != 1 && a != 0))
    {
        cout << "Idade ou ecolaridade inválidos!" << endl;
        cout << "Idade: ";
        cin >> i;

        cout << "Escolaridade:";
        cin >> a;
        cout << endl;
    }

    if(( i >= 18 && i <=70) && (a == 1))

    {
        cout << "É obrigatório votar!" << endl;
    }

    else
    {
        cout << "NÃO é obrigatório votar!" << endl;
    }


}
