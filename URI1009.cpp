#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
  string nome;
  double B, C;

  cin >> nome;
  cin >> B;
  cin >> C;
  cout << fixed << setprecision(2);
  cout << "TOTAL = R$ " << (0.15 * C) + B << endl;
  
  return 0;

}