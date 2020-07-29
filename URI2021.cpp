#include <iostream>

using namespace std;

int main() {
  int N1, N2, N3, N4, N5, N6, M1, M2, M3, M4, M5, M6;
  double valor;

  cin >> valor;

  int notas = valor;
  int moedas = (valor - notas) * 100;

  if((moedas * 1000) % 10 == 9){
    moedas++;
  }

    N1 = notas/100;
    notas = notas%100;
    N2 = notas/50;
    notas = notas%50;
    N3 = notas/20;
    notas = notas%20;
    N4 = notas/10;
    notas = notas%10;
    N5 = notas/5;
    notas = notas%5;
    N6 = notas/2;
    notas = notas%2;

    M1 = notas/1;
    notas = notas%1;
    M2 = moedas/50;
    moedas = moedas%50;
    M3 = moedas/25;
    moedas = moedas%25;
    M4 = moedas/10;
    moedas = moedas%10;
    M5 = moedas/5;
    moedas = moedas%5;
    M6 = moedas/1;
  
  
  cout << "NOTAS:" << endl;
  cout << N1 << " nota(s) de R$ 100.00" << endl;
  cout << N2 << " nota(s) de R$ 50.00" << endl;
  cout << N3 << " nota(s) de R$ 20.00" << endl;
  cout << N4 << " nota(s) de R$ 10.00" << endl;
  cout << N5 << " nota(s) de R$ 5.00" << endl;
  cout << N6 << " nota(s) de R$ 2.00" << endl;
  cout << "MOEDAS:" << endl;
  cout << M1 << " moeda(s) de R$ 1.00" << endl;
  cout << M2 << " moeda(s) de R$ 0.50" << endl;
  cout << M3 << " moeda(s) de R$ 0.25" << endl;
  cout << M4 << " moeda(s) de R$ 0.10" << endl;
  cout << M5 << " moeda(s) de R$ 0.05" << endl;
  cout << M6 << " moeda(s) de R$ 0.01" << endl;
  

  return 0;

  
}