#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	double n;
	int val, vez;
	val = 0;
	
	for(vez = 1; vez <= 6; vez++){
		cin >> n;
		if(n >= 0){
			val = val + 1;
		}
	}
		
	cout << val << " valores positivos" << endl;
	return 0;
}