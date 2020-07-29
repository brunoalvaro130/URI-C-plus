#include <iostream>

using namespace std;

int main() {
  int valor, N1, N2, N3, N4, N5, N6, N7;

  cin >> valor;
  cout << valor << endl;

  N1 = valor / 100;
  valor = valor - N1*100;
  N2 = valor / 50;
  valor = valor - N2*50;
  N3 = valor / 20;
  valor = valor - N3*20;
  N4 = valor / 10;
  valor = valor - N4*10;
  N5 = valor / 5;
  valor = valor - N5*5;
  N6 = valor / 2;
  valor = valor - N6*2;
  N7 = valor / 1;
  valor = valor - N7*1;

  cout << N1 << " nota(s) de R$ 100,00" << endl;
  cout << N2 << " nota(s) de R$ 50,00" << endl;
  cout << N3 << " nota(s) de R$ 20,00" << endl;
  cout << N4 << " nota(s) de R$ 10,00" << endl;
  cout << N5 << " nota(s) de R$ 5,00" << endl;
  cout << N6 << " nota(s) de R$ 2,00" << endl;
  cout << N7 << " nota(s) de R$ 1,00" << endl;

  return 0;


  
}