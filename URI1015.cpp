#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
  double x1, x2, y1, y2, formula;

  cin >> x1 >> y1 >> x2 >> y2;
  
  formula = ((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1));

  cout << fixed << setprecision(4);
  cout << sqrt(formula) << endl;

  return 0;
}