#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	double s, st;
	
	cin >> s;
	
	if (s >= 0 && s <= 400){
		st = s;
		s = s * 0.15;
		st = st + s;
		cout << fixed << setprecision(2);
		cout << "Novo salario: " << st << endl << "Reajuste ganho: " << s << endl << "Em percentual: 15 %" << endl;
	} else if (s > 400 && s <= 800){
		st = s;
		s = s * 0.12;
		st = st + s;
		cout << fixed << setprecision(2);
		cout << "Novo salario: " << st << endl << "Reajuste ganho: " << s << endl << "Em percentual: 12 %" << endl;	
	} else if (s > 800 && s <= 1200){
		st = s;
		s = s * 0.10;
		st = st + s;
		cout << fixed << setprecision(2);
		cout << "Novo salario: " << st << endl << "Reajuste ganho: " << s << endl << "Em percentual: 10 %" << endl;	
	} else if (s > 1200 && s <= 2000){
		st = s;
		s = s * 0.07;
		st = st + s;
		cout << fixed << setprecision(2);
		cout << "Novo salario: " << st << endl << "Reajuste ganho: " << s << endl << "Em percentual: 7 %" << endl;	
	} else {
		st = s;
		s = s * 0.04;
		st = st + s;
		cout << fixed << setprecision(2);
		cout << "Novo salario: " << st << endl << "Reajuste ganho: " << s << endl << "Em percentual: 4 %" << endl;	
	}
	return 0;
}