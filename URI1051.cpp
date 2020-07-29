#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	double s;
	
	cin >> s;
	
	if(s >= 0 && s <= 2000){
		cout << "Isento" << endl;
	} else if(s > 2000 && s <= 3000){
		cout << fixed << setprecision(2);
		cout << "R$ " << (s - 2000)*0.08 << endl;
	} else if(s > 3000 && s <= 4500){
		cout << fixed << setprecision(2);
		cout << "R$ " << (s - 3000)*0.18 + (1000*0.08) << endl;
	} else{
		cout << fixed << setprecision(2);
		cout << "R$ " << (s - 4500)*0.28 + (1500*0.18) + (1000*0.08) << endl;
	}
	return 0;
}