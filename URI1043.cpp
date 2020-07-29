#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	double a, b, c;
	
	cin >> a >> b >> c;
	
	if (a < b + c && b < a + c && c < a + b){
		cout << fixed << setprecision(1);
		cout << "Perimetro = " << a + b + c << endl;
	} else {
		cout << fixed << setprecision(1);
	    cout << "Area = " << ((a + b) * c)/2 << endl;	
	}
	return 0;
}