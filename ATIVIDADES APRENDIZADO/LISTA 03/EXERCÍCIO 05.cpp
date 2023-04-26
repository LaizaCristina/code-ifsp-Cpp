#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{



    setlocale(LC_ALL,"");
    system("color F1");


    int n=0;

    cout << "Informe nota:";
    cin >> n;

    if (n >= 9)
    {
        cout << "Conceito: A.";
    }

    else if (n>=7)
    {
        cout << "Conceito: B.";
    }

    else if (n>=5)
    {
        cout << "Conceito: C.";
    }

    else if (n>=3)
    {
        cout << "Conceito: D.";
    }

    else if (n < 3)
    {
        cout << "Conceito: E.";
    }
}
