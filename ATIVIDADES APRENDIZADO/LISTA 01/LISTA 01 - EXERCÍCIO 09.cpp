#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    system("color F1");

    float c= 0;

    cout << "Temperatura em Celsius: ";
    cin >> c;
    cout << endl;

    cout << "Temperatura em Fahrenheit: " << c*1.8+32.0 << endl;

}
