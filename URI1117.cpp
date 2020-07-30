#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	double x, m, n;
	n = 0;
	m = 0;
	
	while(1){
		
		
		if(n == 2){
			break;
		}
		cin >> x;
		
		if(x >= 0 && x <= 10){
			n++;
			m += x;
		} else{
			cout << "nota invalida" << endl;
		}
		
	}
	cout << "media = " << m/n << endl;   
	return 0;
}