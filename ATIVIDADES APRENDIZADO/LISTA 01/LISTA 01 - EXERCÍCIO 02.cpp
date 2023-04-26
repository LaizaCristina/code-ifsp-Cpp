#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    system("color F1");

    int n1=0;
    int n2=0;

    cout << "Nota 1: ";
    cin >> n1;

    cout << "Nota 2: ";
    cin >> n2;

    cout << "Média:" << (n1 + n2) / 2 << endl;
}
