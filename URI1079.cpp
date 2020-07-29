#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	int n;
	double v1,v2,v3;
	
	cin >> n;
	
	for(int i = 0;i < n;i++){
		cin >> v1 >> v2 >> v3;
		
		cout << fixed << setprecision(1);
		cout << ((v1 * 2) + (v2 * 3) + (v3 * 5))/10 << endl;
	}
	return 0;
}