#include <iostream>

using namespace std;

void Ordem(int a, int b, int c){
  int min, med, max;
  if (a < b && a < c){
    min = a;
    if (b < c){
      med = b;
      max = c;
    } else {
      med = c;
      max = b;
    }
  } else if (b < a && b < c){
    min = b;
    if (a < c){
      med = a;
      max = c;
    } else {
      med = c;
      max = a;
    }
  } else {
    min = c;
    if (a < b){
      med = a;
      max = b;
    } else {
      med = b;
      max = a;
    }
  }

  cout << min << endl << med << endl << max << endl << endl;
}

int main() {
   int a, b, c;

   cin >> a >> b >> c;

   Ordem(a, b, c);

   cout << a << endl << b << endl << c << endl;

   return 0;
}