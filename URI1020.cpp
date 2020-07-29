#include <iostream>

using namespace std;

int main() {
  int N, ano, meses, dias;

  cin >> N;

  ano = N / 365;
  N = N % 365;
  meses = N / 30;
  dias = N % 30;

  cout << ano << " ano(s)" << endl;
  cout << meses << " mes(es)" << endl;
  cout << dias << " dia(s)" << endl;

  return 0;

}