#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    system("color F1");

    float p=0;

    cout << "Peso: ";
    cin >> p;

    cout << "Novo peso + 15%: " << p + (p*15/100) << endl;

    cout << "Novo peso - 20%: " << p - (p*20/100);
}
