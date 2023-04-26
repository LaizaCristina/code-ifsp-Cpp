#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{



    setlocale(LC_ALL,"");
    system("color F1");


    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int n4 = 0;
    int media = 0;


    cout << "Nota 1:";
    cin >> n1;

    cout << "Nota 2:";
    cin >> n2;

    cout << "Nota 3:";
    cin >> n3;

    cout << "Nota 4:";
    cin >> n4;

    cout << "Média:"<< (n1+n2+n3+n4)/4 << endl;

    if ( (n1+n2+n3+n4)/4 >= 6)

    {
        cout << "Aprovado!";
    }

    else
    {
        cout << "Reprovado.";
    }
}
