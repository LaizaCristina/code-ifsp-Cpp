#include <iostream>
using namespace std;



int main()

{
  int valor = 0;
  int v = 0;
  int Maior = 0; // Maior Valor
  int Menor = 0; //MEnor Valor

  cout << "Informe os valores: " << endl << " Ou digite -1 para encerrar o programa." << endl;



  do
    {
      cout << "Valor " << v + 1 << ": ";
      cin >> valor;

      if(valor > 0)
      {
      v = v + 1;

      if (Maior < valor) {
          Maior = valor;
        }

      if (Menor > valor) {
          Menor = valor;
        }
      }

    } while (valor != -1);


  cout << "Maior valor: " << Maior << endl;
  cout << "Menor valor: " << Menor << endl;
}
