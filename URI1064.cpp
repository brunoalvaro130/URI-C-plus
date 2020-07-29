#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	double n, m = 0;
	int val, vez;
	val = 0;
	
	for(vez = 0; vez < 6; ++vez){
		cin >> n;
		if(n > 0){
			m += n;
			val++;
			
		}
	} 
	
	
	cout << val << " valores positivos" << endl;
	cout << m/val << endl;
	return 0;
}