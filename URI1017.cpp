#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double horas, vm;

  cin >> horas >> vm;
  cout << fixed << setprecision(3);
  cout << (horas * vm)/12 << endl;

  return 0;
}