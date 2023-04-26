#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{

    string u;
    int s = 0;



    setlocale(LC_ALL,"");
    system("color F1");


    cout << "Insira Usuário: ";
    cin >> u;
    cout << endl;

    cout << "Insira Senha: ";
    cin >> s;
    cout << endl;

    if (u == "aluno" && s ==1234 )
    {
        cout << "Acesso Liberado!";
    }

    else if (u == "aluno" && s != 1234 )
    {
        cout << "Acesso Negado, vai muda a senha!\n";
    }

    else if (u != "aluno" && s == 1234 )
    {
        cout << "Acesso Negado, vai muda o usuário!\n";
    }

    else if (u != "aluno" && s != 1234 )
    {
        cout << "Acesso Negado, vai muda os dois!\n";
    }

}



