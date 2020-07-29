#include <iostream>

using namespace std;

int main() {
  int N, horas, minutos;

  cin >> N;

  horas = N / 3600;
  N = N % 3600;;
  minutos = N / 60;
  N = N % 60;

  cout << horas << ":" << minutos << ":" << N << endl;

  return 0;

}