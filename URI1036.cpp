#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	double A, B, C, R, R1, R2;
	
	cin >> A >> B >> C;
	
	
	
	if(((B * B) - 4*A*C)<0 || A == 0){
		cout << "Impossivel calcular" << endl;
		
	} else {
		R = sqrt((B * B) - 4*A*C);
		R1 = ((B * -1) + R)/ (2 * A);
	    R2 = ((B * -1) - R)/ (2 * A);
	
		cout << fixed << setprecision(5);
		cout << "R1 = " << R1 << endl;
		cout << "R2 = " << R2 << endl;
	}
	return 0;
}