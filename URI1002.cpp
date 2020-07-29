#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double R;

  cin >> R;
  cout << fixed << setprecision(4);
  cout << "A=" << 3.14159 * R * R << endl;
  
  return 0;
}