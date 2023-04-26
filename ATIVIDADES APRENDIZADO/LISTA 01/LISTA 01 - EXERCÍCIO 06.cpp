#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    system("color F1");

    float l=0;

    cout << "Lado: ";
    cin >> l;

    cout << "Área:" << l*l << " Metros quadrados" << endl;
}
