#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double N1, N2, N3, N4, EX, M, RM;

  cin >> N1 >> N2 >> N3 >> N4;
  
  M = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1))/10;
  
  if(M >= 7.0){
    cout << fixed << setprecision(1);
    cout << "Media: " << M << endl;
    cout << "Aluno aprovado." << endl;
  } else if( M < 5.0){
    cout << fixed << setprecision(1);
    cout << "Media: " << M << endl;
    cout << "Aluno reprovado." << endl;
  } else {
    cout << fixed << setprecision(1);
    cout << "Media: " << M << endl;
    cout << "Aluno em exame." << endl;
    cin >> EX;
    cout << "Nota do exame: " << EX << endl;
    RM = (EX + M)/2;
    if (RM >= 5.0){
      cout << "Aluno aprovado." << endl;
      cout << fixed << setprecision(1);
      cout << "Media final: " << RM << endl;
    } else {
      cout << "Aluno reprovado." << endl;
      cout << fixed << setprecision(1);
      cout << "Media final: " << RM << endl;
    }
  }
  
  return 0;
}