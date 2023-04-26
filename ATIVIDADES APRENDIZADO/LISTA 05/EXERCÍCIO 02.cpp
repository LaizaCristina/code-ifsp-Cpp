
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{

    float n1 = 0;
    float n2 = 0;


    setlocale(LC_ALL,"");
    system("color F1");


    cout << "Digite primeiro número: ";
    cin >> n1;


    cout << "Digite segundo número: ";
    cin >> n2;
    cout << endl;


    if (n1 < 0 || n2 <0)
    {
        cout << "Valor inválido, apenas números positivos!" << endl;
    }

    else
    {
        if (n1 < n2)
        {
            cout << n1 << " é menor.\n";

        }
        else
        {
            cout << n2 << " é menor.\n";
        }
    }

}
