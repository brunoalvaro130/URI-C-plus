#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int A;
  double B, C;

  cin >> A;
  cin >> B;
  cin >> C;

  cout << "NUMBER = " << A << endl;
  cout << fixed << setprecision(2);
  cout << "SALARY = U$ " << B * C << endl;

  return 0;
  
}