#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int C1, U1, C2, U2;
  double P1, P2;

  cin >> C1;
  cin >> U1;
  cin >> P1;
  cin >> C2;
  cin >> U2;
  cin >> P2;
  cout << fixed << setprecision(2);
  cout << "VALOR A PAGAR: R$ " << U1 * P1 + U2 * P2 << endl;

  return 0;
  
}