#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{


    setlocale(LC_ALL,"");
    system("color F1");

    int t = 0;

    cout << "Tabuada: ";
    cin >> t;


    for (int i=1; i<=10; i++)
    {

        cout << i << "x" << t << "=" << i*t << endl;
    }

    system ("pause");
    return 0;
}
