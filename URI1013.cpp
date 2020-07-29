#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
  int A, B, C, maiorAB, maior;

  cin >> A >> B >> C;

  maiorAB = (A + B + abs(A - B))/2;
  maior = (maiorAB + C + abs(maiorAB - C))/2;
  
  cout << maior << " eh o maior" << endl;

  return 0;
}