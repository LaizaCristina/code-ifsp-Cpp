#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    system("color F1");

    float l1= 0;
    float l2= 0;

    cout << "1° lado em metros: ";
    cin >> l1;

    cout << "2° lado em metros: ";
    cin >> l2;

    cout << "Área em metro quadrados: " << l1*l2 << endl;

    cout << "Potência de iluminação:" << (l1*l2)*18 << "W." << endl;

}

