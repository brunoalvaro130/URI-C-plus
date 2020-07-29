#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	int n, q, to, c, r, s;
	to = 0;
	c = 0;
	r = 0;
	s = 0;
	string t;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> q >> t;
		to += q;
		
		if(t == "C"){
			c += q;
		} else if (t == "R"){
			r += q;
		} else if (t == "S"){
			s += q;
		}
	}
	
	cout << "Total: " << to << " cobaias" << endl;
	cout << "Total de coelhos: " << c << endl;
	cout << "Total de ratos: " << r << endl;
	cout << "Total de sapos: " << s << endl;
	cout << fixed << setprecision(2);
	cout << "Percentual de coelhos: " << (double)(c * 100)/to << " %" << endl;
	cout << "Percentual de ratos: " << (double)(r * 100)/to << " %" << endl;
	cout << "Percentual de sapos: " << (double)(s * 100)/to << " %" << endl;
	return 0;
}